#include <iostream>
using namespace std;

#include "funkcje.cpp"

int main()
{
	cout << "LICZENIE MIEJSC ZEROWYCH FUNKCJI LINIOWEJ" << endl;
	
	double a, b, c, wynik;
	int postac_funkcji; //[1] kierunkowa, y = Ax + B; [2] ogolna, Ax + By + C = 0


	cout << "Podaj postac funkcji, ktora chcesz wprowadzic." << endl
		 << "[1] Kierunkowa, y = Ax + B" << endl
		 << "[2] ogolna, Ax + By + C = 0" << endl;
	cin >> postac_funkcji;
	
	//przy bledzie strumienia program wpisze zero, wiec ponizszy warunek zajdzie
	while(postac_funkcji != 1 && postac_funkcji != 2)
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
			cout << "Parametr moze przyjac tylko wartosci od 1 do 2 wlacznie. Wprowadz jeszcze raz: ";
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
	
	
	cout << "Podaj parametr B funkcji: ";
	cin >> b;
	while( cin.fail() )
	{
		cin.clear(); cin.ignore(1000, '\n');
		cout << "Parametr nie jest liczba. Wprowadz jeszcze raz: ";
		cin >> b;
	}
	cin.ignore(1000, '\n');
	
	if(postac_funkcji == 2) //ogolna
	{
		cout << "Podaj parametr C funkcji: ";
		cin >> b;
		while( cin.fail() )
		{
			cin.clear(); cin.ignore(1000, '\n');
			cout << "Parametr nie jest liczba. Wprowadz jeszcze raz: ";
			cin >> b;
		}
		cin.ignore(1000, '\n');
	}
	
	
	int exitcode = oblicz_mz(postac_funkcji, a, b, c, wynik);
	
	if( exitcode == 0 )
	{
		cout << "Funkcja ta nie posiada miejsc zerowych." << endl;
	}
	else if( exitcode == 1 )
	{
		cout << "Funkcja ta ma jedno miejsce zerowe w x = " << wynik << "." << endl;
	}
	else if( exitcode == 2 )
	{
		cout << "Funkcja ta ma nieskonczenie wiele miejsc zerowych." << endl;
	}
	else if( exitcode == -1 )
	{
		cout << "Wystapil blad w trakcie wyszukiwania miejsc zerowych." << endl;
	}
	
	return 0;
}


