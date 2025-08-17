#include <iostream>
#include <cmath>

using namespace std;

class Pomiary {
  public:
    //tworzenie
    Pomiary() = delete;
    Pomiary(int _rozmiar) {
        rozmiar = _rozmiar;
        tab = new double[rozmiar];
        liczbaPomiarow = 0;
    };

    //kasowanie
    ~Pomiary() {delete[] tab;};

    //kopiowanie -- DO NAPISANIA!
    Pomiary(const Pomiary& pomiar){
        rozmiar = pomiar.rozmiar;
        tab = new double[pomiar.rozmiar];
        for(int i = 0; i < pomiar.rozmiar; i++){
            tab[i] = pomiar.tab[i];
        }
        liczbaPomiarow = pomiar.liczbaPomiarow;
    };
    Pomiary& operator=(const Pomiary& pomiar){
        if(this == &pomiar)
            return *this;

        delete[] tab;

        rozmiar = pomiar.rozmiar;
        liczbaPomiarow = pomiar.liczbaPomiarow;
        if(rozmiar > 0){
            tab = new double[rozmiar];

        }else{
        tab = nullptr;
        }
        for(int i = 0; i < rozmiar; i++){
            tab[i] = pomiar.tab[i];
        }
        return *this;
    };

    //moje drukowanie
    void drukuj() const{
    cout << "Drukowanie pomiarow:" << endl;
    cout <<"[";
    for(int i = 0; i < liczbaPomiarow; i++){
        cout << tab[i];
        if(i != liczbaPomiarow - 1){
            cout << " ";
        }
    }
    cout << "]";
    };

    void dodaj(double wartosc);
    int ilePomiarow() const{
    return liczbaPomiarow;
    };
    double srednia(){
        if(liczbaPomiarow == 0){
            return 0.0;
        }
    double suma = 0;
    for(int i = 0; i < liczbaPomiarow; i++){
        suma += tab[i];
    }
    return suma/double(liczbaPomiarow);
    };
    double kwartyl(int numer);
    double std_dev(){
        if(liczbaPomiarow == 0){
            return 0.0;
        }
    double suma = 0;
    for(int i = 0; i < liczbaPomiarow; i++){
        suma += tab[i]*tab[i];
    }
    double wynik = sqrt(suma/double(liczbaPomiarow) - srednia()*srednia());
    return wynik;
    };
    double max();
    Pomiary& polacz_proby(const Pomiary& p);

  private:
    double* tab;
    int rozmiar;
    int liczbaPomiarow;
};

/*void Pomiary::drukuj() const {  //cudze drukowanie
    for (int i=0; i < liczbaPomiarow-1; ++i) {
        std::cout <<tab[i] <<",";
    }
    std::cout <<tab[liczbaPomiarow-1] <<"\n";
}*/

// ladnie byloby zeby zwracalo l-wartosc
// to ze w tresci zadania zwraca void to przypadek

void Pomiary::dodaj(double wartosc) {
    if (liczbaPomiarow != rozmiar) {
        tab[liczbaPomiarow] = wartosc;
        ++liczbaPomiarow;
    } else {
        std::cout <<"Przekroczono mozliwa liczbe pomiarow!\n";
    }
}

Pomiary& Pomiary::polacz_proby(const Pomiary& p) {
	std::cout <<"liczba pomiarow wywolywacza:" <<liczbaPomiarow <<" a rozmiar " <<rozmiar <<"\n";
	std::cout <<"liczba pomiarow drugiego: " <<p.liczbaPomiarow <<"\n";
    	if (liczbaPomiarow + p.liczbaPomiarow > rozmiar) {
	rozmiar = liczbaPomiarow + p.liczbaPomiarow;
        double* nowa = new double[liczbaPomiarow+ p.liczbaPomiarow];
        for (int i =0; i<liczbaPomiarow; ++i) {
            nowa[i] = tab[i];
        }
        delete[] tab;
        tab = nowa;
    }
        for (int i = 0; i< p.liczbaPomiarow; ++i) {
            tab[liczbaPomiarow++] = p.tab[i];
	}
	std::cout <<"liczba pomiarow wywolywacza: " <<liczbaPomiarow <<"a rozmiar " <<rozmiar <<"\n";
    return *this;
}


int main()
{
    Pomiary p(6);
    for (int i=0; i<6; ++i) {
        p.dodaj(double(i));
    }
    p.drukuj();
    Pomiary s(8);
    for (int i =0; i<8; ++i) {
	s.dodaj(double(i));
    }
    p.polacz_proby(s);
    p.drukuj();
    s.drukuj();
    cout << endl << p.std_dev() << endl;
    cout << p.srednia();
    return 0;
}
