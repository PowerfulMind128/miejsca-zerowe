#ifndef kwadratowa_hpp
#define kwadratowa_hpp

/*
Zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - dwa m.z.
3 - nieskonczenie wiele m.z.
-1 - blad

Zmiennym "mz1" oraz "mz2" przypisuje sie wartosc tylko przy zwroceniu 1 lub 2.
*/
int oblicz_mz_kwadratowa(
    double a, double b, double c,
    double& mz1, double& mz2);

#endif
