#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
void zamien(int* x, int *y){
    int a = *x;
    *x = *y;
    *y = a;
    }
    void f(int *n){
    (*n)++;//nawiasy s¹ wa¿ne bo wplywaja na wartosc a nie na adres
    }
    void tablica_losowa(int n){
    srand(time(0));

    int *t = new int[n];
    for(int i = 0; i < n; i++){
        t[i] = rand();
    }
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += t[i];
    }
    for(int i = 0; i < n; i++){
        cout << t[i] << " ";
    }
    cout << endl;
    cout << "suma to :" << suma << endl;
    double srednia = (double)suma/n;
    cout << "srednia to:" << srednia;
    delete[] t;
    }
    /*void odwroc(int *t){
    int rozmiar = sizeof(t)/4;
    for(int i = *t; i < *t + rozmiar; i++){
        zamien(&t[i],)
    }
    }*/
    int maks(int *t, int rozmiar){
    int m = t[0];
    for(int i = 1 ;i < rozmiar; i++){
        if(t[i] > m){
            m =t[i];
        }
    }
    return m;
    }
    /*void naodwrot(char* s, int rozmiar){
    for(int i = rozmiar - 1; i >= 0; i--){
        cout << s[i];
    }
    }*/
int main()
{
//Podstawowe operacje na wskaŸnikach
/*Zainicjalizuj zmienn¹ typu int i wskaŸnik, który wskazuje na tê zmienn¹.
Wyœwietl adres zmiennej oraz jej wartoœæ, zarówno bezpoœrednio, jak i przez wskaŸnik.
Zadeklaruj dwie zmienne i wskaŸniki do nich.
U¿yj wskaŸników, aby zamieniæ wartoœci tych zmiennych.*/
    int n = 5;
    int* p = &n;
    cout << n << endl;
    cout << p << endl;
    cout << *p << endl;
    int x = 1;
    int y = 2;
    int* wx = &x;
    int* wy = &y;
    int a = *wx;
    int b = *wy;
    x = b;
    y = a;
    cout << x << endl;
    cout << y << endl;
    int k = 5, l = 10;
    zamien(&k, &l);
    cout << "k: " << k << ", l: " << l << endl;
    f(&k);
    cout << k << endl;
    /*3. Dynamiczna alokacja pamiêci
Utwórz dynamiczn¹ tablicê o rozmiarze podanym przez u¿ytkownika.
Wype³nij tablicê wartoœciami wprowadzonymi przez u¿ytkownika i wyœwietl je.
Napisz program, który tworzy dynamiczn¹ tablicê,
oblicza sumê i œredni¹ jej elementów, a nastêpnie zwalnia pamiêæ.*/
    int r;
    cout << "podaj rozmiar r:";
    cin >> r;
    int *t = new int[r];
    for(int i = 0; i < r; i++){
        cout << "podaj element:";
        cin >> t[i];
        cout << " ";
    }
    cout << "[ ";
    for(int i = 0; i < r; i++){
        cout << t[i] << " ";
    }
    cout << "]" << endl;
    delete[] t;
    cout << "podaj rozmiar tablicy" << endl;
    cin >> n;
    tablica_losowa(n);
    /*Tablice wskaźników
Utwórz tablicę wskaźników, gdzie każdy wskaźnik wskazuje na dynamicznie alokowaną zmienną.
Wypełnij zmienne wartościami podanymi przez użytkownika i wyświetl je.
Napisz program, który przechowuje łańcuchy znaków w tablicy wskaźników (char*),
a następnie wypisuje je w odwrotnej kolejności.*/
    int* m = new int;
    int* v = new int;
    cout <<endl <<  "podaj m:" << endl;
    cin >> *m;
    cout << "podaj v" << endl;
    cin >> *v;
    int tab[2]{*m , *v};
    cout << "tablica: " << endl;
    for(int i = 0; i < 2; i++){
        cout << tab[i] << " ";
    }
    //Napisz program, który przechowuje łańcuchy znaków w tablicy wskaźników (char*),
    // a następnie wypisuje je w odwrotnej kolejności.

    return 0;
}
