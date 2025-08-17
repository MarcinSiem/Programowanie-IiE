#include <iostream>
#include <vector>
using namespace std;
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

class Pomiary{

private:
    double p;
    double tablica[10]{};

public:
    Pomiary(): p(0){
    for(int i = 0; i < 10; i++){
        tablica[i] = p;
    }
    }
    Pomiary(double _p,const double *_tablica): p(_p){
    for(int i = 0; i < 10, i++){
        tablica[i] = _tablica[i];
    }
    }
    void drukuj(){
    for(int i = 0; i < 10; i++){
        cout << tablica[i] << " ";
    }
    }
};

int main()
{

    return 0;
}
