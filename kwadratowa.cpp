#ifndef kwadratowa_cpp
#define kwadratowa_cpp

#include "kwadratowa.hpp"

#include <cmath>
#include "liniowa.cpp"

//opisy funkcji znajduja sie w kwadratowa.hpp

int oblicz_mz_kwadratowa_ogolna(
    double a, double b, double c,
    double& mz1, double& mz2)
{
    //gdy a = 0, funkcja zmienia sie w liniowa kierukowa
    if(a==0)
        return oblicz_mz_liniowa_kierunkowa(b, c, mz1);

    double delta = b*b - 4*a*c, pdelta;


    if(delta>0) //dwa m.z.
    {
        pdelta = sqrt(delta);
        mz1 = (-b - pdelta) / 2*a;
        mz2 = (-b + pdelta) / 2*a;
        return 2;
    }
    else if(delta==0) //jedno m.z.
    {
        mz1 = -b / a;
        return 1;
    }
    else //delta<0; brak m.z.
    {
        return 0;
    }
}

int oblicz_mz_kwadratowa_kanoniczna(
    double a, double p, double q,
    double& mz1, double& mz2)
{
    //na razie nic nie potrafie zrobic!
    return -1;
}

#endif
