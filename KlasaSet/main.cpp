#include <iostream>

using namespace std;

/*Zaimplementowa� klas� Set zliczaj�c� punkty w secie. Gra toczy si� mi�dzy graczami A i B
do okre�lonej liczby punkt�w, ale zwyci�zca musi mie� 2 punkty przewagi, aby set zosta�
zako�czony.
Uwaga: je�li set zosta� uko�czony zaliczanie punkt�w nie powinno by� mo�liwe.*/

class Set{
private:
    int maks;
    int a;
    int b;

public:
    Set():maks(3),a(0),b(0){}
    Set(int doilu): maks(doilu), a(0),b(0){}
    ~Set() = default;
    void PunktA(){
    if(this->koniec() == 0){
        a++;
        }
    }
    void PunktB(){
    if(this->koniec() == 0){
        b++;
        }
    }
    void drukujWynik(){
    cout << endl << "Wynik to: " << endl << "A: " << a << " - " << b << " :B" << endl;
    }
    bool koniec(){
    if(a >= maks && b < a - 1){
        return true;
    }
    if(b >= maks && a < b - 1){
        return true;
    }
    else{
        return false;
    }
    }
    char zwyciezca(){
        if(a >= maks && b < a - 1){
            return 'A';
    }
        if(b >= maks && a < b - 1){
            return 'B';
    }
        else{
            return '?';
    }
    }

};

int main()
{
    Set pingpong(3);
    pingpong.PunktA();
    pingpong.PunktB();
    pingpong.PunktA();
    pingpong.PunktB();
    pingpong.PunktB();
    //pingpong.PunktA();
    pingpong.PunktB();
    pingpong.PunktA();
    (pingpong.koniec()) ? cout << "Mecz zakonczony" : cout << "Mecz trwa";
    pingpong.drukujWynik();
    cout << "Zwyciezca to gracz " << pingpong.zwyciezca();
    return 0;
}
