#ifndef liniowa_hpp
#define liniowa_hpp

/*
Zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
3 - nieskonczenie wiele m.z.

Zmiennej "wynik" przypisuje sie wartosc tylko przy zwroceniu 1.
*/
int oblicz_mz_kierunkowa(
    double a, double b,
    double& wynik);

/*
Zwraca kody wyjscia w sposob identyczny jak oblicz_mz_kierunkowa() (zobacz)
*/
int oblicz_mz_ogolna(
    double a, double b, double c,
    double& wynik);

#endif
