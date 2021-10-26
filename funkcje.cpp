#include <iostream>
using namespace std;

int oblicz_mz(double a, double b, double& wynik)
{
	if(a==0)
	{
		return 1;
	}
	
	wynik = -b/a;
	return 0;
}
