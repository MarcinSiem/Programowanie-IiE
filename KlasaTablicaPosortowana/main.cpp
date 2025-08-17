#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;

class TablicaPosortowana{
private:
    int n;
    vector<int> tablica;
public:
    TablicaPosortowana():n(10){
        tablica = {};
            sort(tablica.begin(), tablica.end());

    }
    TablicaPosortowana(int maksymalnyRozmiar){
        n = maksymalnyRozmiar;
        tablica = {};
        sort(tablica.begin(), tablica.end());
    }
    ~TablicaPosortowana() = default;
        //Tworzy now¹ pust¹ tablicê, która mo¿e przechowywaæ nie wiêcej ni¿ podan¹ liczbê elementów.
    void dodaj(int wartosc){
        if(tablica.size() < n){
            tablica.push_back(wartosc);
            sort(tablica.begin(), tablica.end());
        }
        else{
            throw domain_error("Przekroczono zakres tablicy");
        }
    }
        //Dodaje nowy element.
    bool usun(int wartosc){
        bool a = false;
        for(int i = 0; i < tablica.size(); i++){
            if(tablica[i] == wartosc){
                a = true;
            }
        }
        remove(tablica.begin(),tablica.end() + 1, wartosc);
        if(a){
            tablica.pop_back();
        }
        return a;
    }
        //Jeœli podany element znajduje siê w tablicy, to go usuwa i zwraca true; jeœli nie zwraca false.
    int element(int indeks){
        return tablica[indeks];
    }
        //Zwraca element o podanym indeksie, np. element(0) to najmniejszy element, element(1) drugi
        //najmniejszy, itd.
    int max(){
        return tablica.back();
    }
        //Zwraca najwiêkszy element
    void drukuj(){
        cout << endl << "[ ";
        for(int i : tablica){
            cout << i << " ";
        }
        cout << "]";
    }
};

int main()
{
    TablicaPosortowana test;
    test = TablicaPosortowana(5);
    test.dodaj(4);
    test.dodaj(7);
    test.dodaj(8);
    test.dodaj(1);
    cout << test.usun(2);
    cout << test.usun(4);
    test.drukuj();
    cout << test.max();

    return 0;
}
