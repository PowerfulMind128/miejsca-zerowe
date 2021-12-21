#ifndef liniowa_cpp
#define liniowa_cpp

#include "liniowa.hpp"

//opisy funkcji znajduja sie w liniowa.hpp

int oblicz_mz_liniowa_kierunkowa(
    double a, double b,
    double& wynik)
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
			return 3;
		}
		else //a==0 i b!=0: brak m.z. (prosta rownolegla do osi OX niepokrywajaca sie z nia)
		{
			return 0;
		}
	}
}

int oblicz_mz_liniowa_ogolna(
    double a, double b, double c,
    double& wynik)
{
	/*
	dla postaci ogolnej, przy szukaniu mz wystarczy pominac
	parametr B i odpowiednio przepisac pozostale parametry:
	*/
	return oblicz_mz_liniowa_kierunkowa(a, c, wynik);
}

#endif
