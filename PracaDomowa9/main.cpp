#include <iostream>

using namespace std;
int nwd(int a, int b){
    if(a != 0)
        return nwd(b%a, a);
    return b;
}
class Ulamek {
    public:
        // kazdy ulamek potrafi sie stworzyc
        // przyjelismy konwencje, ze domyslny ulamek to 1/1
        Ulamek(): licznik(1), mianownik(1) {};
        Ulamek(int _licznik, int _mianownik) {
            // ulamki nie moga miec 0 mianownika
            if (_mianownik != 0 ){
                licznik = _licznik;
                mianownik = _mianownik;
                } else {throw logic_error("Proba stworzenia ulamka z mianownikiem zero");}
            }
     // wypada umiec sie skasowac
     ~Ulamek() = default;
     // trzeba wiedziec cos o kopiowaniach
     Ulamek(const Ulamek& u) = default;
     Ulamek& operator=(const Ulamek& u) = default;
      // wypada sie drukowac
      void drukuj() const { cout <<licznik <<"/" <<mianownik;};

      Ulamek operator+(const Ulamek& u) const {
          return Ulamek(licznik*u.mianownik + mianownik*u.licznik, mianownik*u.mianownik);
          }
    Ulamek operator-(const Ulamek& u) const{
        return Ulamek(licznik*u.mianownik - mianownik*u.licznik, mianownik*u.mianownik);
    }
    void skroc(){
    while(nwd(licznik, mianownik)> 1){
        licznik /= nwd(licznik, mianownik);
        mianownik /= nwd(licznik, mianownik);
    }
    }
    Ulamek operator*(const Ulamek& u) const{
    Ulamek iloczyn  = Ulamek(licznik * u.licznik, mianownik * u.mianownik);
    iloczyn.skroc();
    return iloczyn;
    }
    Ulamek odwrotnosc()const{
    return Ulamek(mianownik,licznik);
    }
    Ulamek operator/(const Ulamek& u) const{
    Ulamek iloraz = (*this) * u.odwrotnosc();
    iloraz.skroc();
    return iloraz;
    }
    /*void liczba_mieszana(){
    if(licznik >= mianownik)
    }
    \*/
    private:
        // kazdy ulamek posiada licznik i mianownik
        int licznik;
        int mianownik;

    };

int main()
{
    Ulamek v = Ulamek(16,4);
    Ulamek w = Ulamek(4,5);
    Ulamek x = v*w;
    x.drukuj();
    cout << endl;
    Ulamek y = v / w;
    y.drukuj();
    cout << endl;
    cout << sizeof(Ulamek);
    return 0;
}
