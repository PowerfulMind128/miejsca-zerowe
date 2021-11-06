#include "funkcje.cpp"

#ifndef funkcje_hpp
#define funkcje_hpp

/*
zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - nieskonczenie wiele m.z.

zmiennej "wynik" przypisuje sie wartosc tylko przy zwroceniu 1
*/
int oblicz_mz(double a, double b, double& wynik);

#endif
