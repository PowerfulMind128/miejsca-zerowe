#include <iostream>
using namespace std;

#include "funkcje.hpp"

int main()
{
	cout << "LICZENIE MIEJSC ZEROWYCH FUNKCJI LINIOWEJ" << endl;
	
	double a, b, wynik;
	
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
	
	
	int exitcode = oblicz_mz(a, b, wynik);
	
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
	
	return 0;
}
