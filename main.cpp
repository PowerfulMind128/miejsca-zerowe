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
	
	if( exitcode == 0 ) //wyjscie z sukcesem
	{
		cout << "Miejsce zerowe: x = " << wynik << endl;
	}
	else if( exitcode == 1)
	{
		cerr << "Blad danych: a jest rowne zeru." << endl;
	}
	
	return 0;
}
