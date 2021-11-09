#ifndef funkcje_hpp
#define funkcje_hpp

/*
zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - nieskonczenie wiele m.z.
-1 - blad

zmiennej "wynik" przypisuje sie wartosc tylko przy zwroceniu 1

Argument c nie jest uzywany, jesli wskazana postac nie zawiera
parametru C. W tym przypadku umieszczenie w nim smieciowych danych jest
bezpieczne dla programu
*/
int oblicz_mz(int postac_funkcji, double a, double b, double c, double& wynik);

/*
zwraca kody wyjscia:
0 - brak miejsc zerowych
1 - jedno m.z.
2 - nieskonczenie wiele m.z.

zmiennej "wynik" przypisuje sie wartosc tylko przy zwroceniu 1
*/
int oblicz_mz_kierunkowa(double a, double b, double& wynik);

/*
zwraca kody wyjscia w sposob identyczny jak oblicz_mz_kierunkowa() (zobacz)
*/
int oblicz_mz_ogolna(double a, double b, double c, double& wynik);

#endif


