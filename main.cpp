#include <iostream>
using namespace std;

#include "funkcje.hpp"

int main()
{
	cout << "LICZENIE MIEJSC ZEROWYCH FUNKCJI LINIOWEJ" << endl;
	
	double a, b, wynik;
	cout << "Podaj parametry A oraz B funkcji." << endl;
	cin >> a >> b;
	
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
