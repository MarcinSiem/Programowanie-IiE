#include <iostream>
#include <cmath>

//6. Zaimplementowaæ klasê Wektor, której obiekty reprezentuj¹ wektory w przestrzeni n.

using namespace std;

class Wektor{
    private:
       int n;
       double* w = new double[n];
    public:
    Wektor():n(1){
        w[0] = 0;
    } // wektor domyslny 1 jednowymiarowe
    Wektor(int _n){
        n = _n;
        for(int i = 0; i < n; i++){
            w[i] = 0;
        }
    }// tworzy wektor (0,…,0) w R^n
    double dlugosc(){
        double suma_kwadratow = 0;
        for(int i = 0; i < n; i++){
            suma_kwadratow = w[i]*w[i];
        }
        return sqrt(suma_kwadratow);
    }//zwraca d³ugoœæ wektora (funkcja sqrt liczy pierwiastek),
    double iloczynSkalarny(Wektor& w); //zwraca iloczyn skalarny z podanym wektorem,
    void pomnoz(double c); // mno¿y wektor przez podany skalar.
};

int main()
{
    return 0;
}
