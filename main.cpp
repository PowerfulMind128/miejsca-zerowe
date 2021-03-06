#include <iostream>
using namespace std;

#include "funkcje.cpp"

int main()
{
	cout << "LICZENIE MIEJSC ZEROWYCH FUNKCJI" << endl;

	double a, b, c, mz1, mz2;
	/*
	opisy postaci funkcji:
	[1] kwadratowa ogolna, y = Ax^2 + Bx + C
	[2] kwadratowa kanoniczna, y = A(x-P)^2 + Q
	[3] liniowa kierunkowa, y = Ax + B
	[4] liniowa ogolna, Ax + By + C = 0
	*/
	int postac_funkcji;


	cout << "Podaj postac funkcji, ktora chcesz wprowadzic." << endl
         << "Mozliwe opcje:" << endl
		 << "[1] Kwadratowa ogolna, y = Ax^2 + Bx + C" << endl
		 << "[2] Kwadratowa kanoniczna, y = A(x-P)^2 + Q" << endl
		 << "[3] Liniowa kierunkowa, y = Ax + B" << endl
		 << "[4] Liniowa ogolna, Ax + By + C = 0" << endl
		 << endl
		 << "Twoj wybor to: ";
	cin >> postac_funkcji;

	//przy bledzie strumienia program wpisze zero, wiec ponizszy warunek zajdzie
	while(postac_funkcji < 1 || postac_funkcji > 4)
	{
		if( cin.fail() )
		{
			cin.clear(); cin.ignore(1000, '\n');
			cout << "Parametr nie jest liczba calkowita. Wprowadz jeszcze raz: ";
			cin >> postac_funkcji;
		}
		else
		{
			cin.clear(); cin.ignore(1000, '\n');
			cout << "Parametr moze przyjac tylko wartosci od 1 do 4 wlacznie. Wprowadz jeszcze raz: ";
			cin >> postac_funkcji;
		}
	}
	cin.ignore(1000, '\n');


	cout << "Podaj parametr A funkcji: ";
	cin >> a;
	while( cin.fail() )
	{
		cin.clear(); cin.ignore(1000, '\n');
		cout << "Parametr nie jest liczba. Wprowadz jeszcze raz: ";
		cin >> a;
	}
	cin.ignore(1000, '\n');


	if(postac_funkcji == 2) //kwadrat. kanoniczna
        cout << "Podaj parametr P funkcji: ";
    else
        cout << "Podaj parametr B funkcji: ";
	cin >> b;
	while( cin.fail() )
	{
		cin.clear(); cin.ignore(1000, '\n');
		cout << "Parametr nie jest liczba. Wprowadz jeszcze raz: ";
		cin >> b;
	}
	cin.ignore(1000, '\n');


	if(postac_funkcji != 3) //wszystkie postacie poza kierunkowa
	{
        if(postac_funkcji == 2) //kwadrat. kanoniczna
            cout << "Podaj parametr Q funkcji: ";
        else
            cout << "Podaj parametr C funkcji: ";

		cin >> c;
		while( cin.fail() )
		{
			cin.clear(); cin.ignore(1000, '\n');
			cout << "Parametr nie jest liczba. Wprowadz jeszcze raz: ";
			cin >> c;
		}
		cin.ignore(1000, '\n');
	}


	int exitcode = oblicz_mz(postac_funkcji, a, b, c, mz1, mz2);

	switch(exitcode)
	{
    case 0:
        cout << "Funkcja ta nie posiada miejsc zerowych." << endl;
        break;
    case 1:
        cout << "Funkcja ta ma jedno miejsce zerowe w x = " << mz1 << "." << endl;
        break;
    case 2:
        cout << "Funkcja ta ma dwa miejsca zerowe: x = " << mz1 << " lub x = " << mz2 << "." << endl;
        break;
    case 3:
        cout << "Funkcja ta ma nieskonczenie wiele miejsc zerowych." << endl;
        break;
    case -1:
        cout << "Wystapil blad w trakcie wyszukiwania miejsc zerowych." << endl;
        break;

    default: break;
	}

	return 0;
}


