#ifndef funkcje_cpp
#define funkcje_cpp

#include "funkcje.hpp"

#include "kwadratowa.cpp"
#include "liniowa.cpp"

//opisy funkcji znajduja sie w funkcje.hpp

int oblicz_mz(
    int postac_funkcji,
    double a, double b, double c,
    double& mz1, double& mz2)
{
    switch(postac_funkcji)
    {
    case 1: //kwadratowa ogolna
        return oblicz_mz_kwadratowa_ogolna(a, b, c, mz1, mz2);
        break;
    case 2: //kwadratowa kanoniczna
        return oblicz_mz_kwadratowa_kanoniczna(a, b, c, mz1, mz2);
        break;
    case 3: //liniowa kierunkowa
        return oblicz_mz_liniowa_kierunkowa(a, b, mz1);
        break;
    case 4: //liniowa ogolna
        return oblicz_mz_liniowa_ogolna(a, b, c, mz1);
        break;
    default:
        return -1; //wypadek przy pracy
        break;
    }
}

#endif
