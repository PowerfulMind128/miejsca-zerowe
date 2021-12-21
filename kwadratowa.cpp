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
    //gdy a = 0, funkcja zmienia sie w liniowa kierunkowa
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
    /*
    y = A(x-P)^2 + Q
    0 = A(x-P)^2 + Q (zakladamy ze y = 0 - szukamy m.z.)
    -Q = A(x-P)^2
    -Q/A = (x-P)^2
    sqrt(-Q/A) = |x-P| (-Q/A musi byc nieujemne!)
    sqrt(-Q/A) = x-P    ||  sqrt(-Q/A) = -x+P
    sqrt(-Q/A) + P = x  ||  sqrt(-Q/A) - P = -x
    x = P + sqrt(-Q/A)  ||  x = P - sqrt(-Q/A)
    */

    //gdy a==0, funkcja przyjmuje postac y = Q. Nalezy ja dalej liczyc jak dla
    //funkcji liniowej kierunkowej z A rownym 0
    if(a==0)
        return oblicz_mz_liniowa_kierunkowa(0, q, mz1);

    double wyr_q_a = -q/a, p_wyr_q_a;
    if(wyr_q_a>0) //dwa m.z.
    {
        p_wyr_q_a = sqrt(wyr_q_a);
        mz1 = p - p_wyr_q_a;
        mz2 = p + p_wyr_q_a;
        return 2;
    }
    else if(wyr_q_a==0) //jedno m.z.
    {
        mz1 = p;
        return 1;
    }
    else //wyr_q_a<0; brak m.z.
    {
        return 0;
    }

    return -1;
}

#endif
