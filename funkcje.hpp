#ifndef funkcje_hpp
#define funkcje_hpp

/*
Zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - dwa m.z.
3 - nieskonczenie wiele m.z.
-1 - blad

Zmiennym "mz1" oraz "mz2" przypisuje sie wartosc tylko przy zwroceniu 1 lub 2.

Argument c nie jest uzywany, jesli wskazana postac nie zawiera
parametru C. W tym przypadku umieszczenie w nim smieciowych danych jest
bezpieczne dla programu
*/
int oblicz_mz(
    int postac_funkcji,
    double a, double b, double c,
    double& mz1, double& mz2);

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


