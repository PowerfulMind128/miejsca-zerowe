#include <iostream>
using namespace std;

/*
zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - nieskonczenie wiele m.z.

zmiennej "wynik" przypisuje sie wartosc tylko przy zwroceniu 1
*/
int oblicz_mz(double a, double b, double& wynik)
{
	if(a!=0) //jedno m.z.
	{
		wynik = -b/a;
		return 1;	
	}
	else
	{
		if(b==0) //a==0 i b==0: nieskonczenie wiele m.z. (prosta y=0)
		{
			return 2;
		}
		else //a==0 i b!=0: brak m.z. (prosta rownolegla do OX niepokrywajaca sie z nia)
		{
			return 0;
		}
	}
}


