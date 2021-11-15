#include "funkcje.hpp"

//opisy funkcji znajduja sie w funkcje.hpp

int oblicz_mz(int postac_funkcji, double a, double b, double c, double& wynik)
{
	if(postac_funkcji == 1) //kierunkowa
	{
		return oblicz_mz_kierunkowa(a, b, wynik);
	}
	else if(postac_funkcji == 2) //ogolna
	{
		return oblicz_mz_ogolna(a, b, c, wynik);
	}
	else return -1; //wypadek przy pracy
}

int oblicz_mz_kierunkowa(double a, double b, double& wynik)
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

int oblicz_mz_ogolna(double a, double b, double c, double& wynik)
{
	/*
	dla postaci ogolnej, przy szukaniu mz wystarczy pominac
	parametr B i odpowiednio przepisac pozostale parametry:
	*/
	return oblicz_mz_kierunkowa(a, c, wynik);
}


