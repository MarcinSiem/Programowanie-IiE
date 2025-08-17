#include <iostream>
#include <stdexcept>
/*Zaimplementować klasę Pomiary, która przechowuje wykonane pomiary (liczby typu double) i umożliwia dokonanie na nich pewnych operacji statystycznych. Zakładamy, że Pomiary opisują wyniki uzyskane
w pojedynczym badaniu – w ramach badania wykonuje się określoną liczbę pomiarów.
Wybrane metody publiczne:
• void dodaj(double wartosc) – dodaje nowy pomiar o zadanej wartości. W razie przekroczenia zakresu
zwraca wyjątek out of range
• int ilePomiarow() const – zwraca liczbę zarejestrowanych pomiarów
• double srednia() const – zwraca średnia wartość zarejestrowanych pomiarów
• double max() const – zwraca wartość największą z zarejestrowanych pomiarów
• (⋆) Pomiary& polacz proby(const Pomiary& p) – łączy dotychczasowy zestaw pomiarów z zestawem
innych pomiarów (zwiększa możliwą liczbę pomiarów w oryginalnej bazie)*/
using namespace std;

class Pomiary{

private:
    int n;
    double *p;
    int num;
public:
    Pomiary(): n(0), p(nullptr), num(1){}
    Pomiary(int _n, const double *_p, int _num){
    n = _n;
    p = new double[n];
    for(int i = 0; i < n; i++){
        p[i] = _p[i];
    }
    num = _num;
    }
    ~Pomiary(){
    delete[] p;
    }
    void dodaj(){
        if(num <= n){
    cout << "Podaj pomiar numer " << num << ": " ;
    cin >> p[num - 1];
    num++;
        }
        else{
            throw out_of_range("przekroczono maks znakow");
        }
    }
};

int main()
{


    return 0;
}
