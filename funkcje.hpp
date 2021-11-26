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

#endif
