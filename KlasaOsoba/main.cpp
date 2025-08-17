#include <iostream>
#include <cstring>

using namespace std;

class Osoba{
private:
    char* imie;
    char* nazwisko;
    int wiek;
public:
    Osoba():imie(nullptr), nazwisko(nullptr), wiek(0){}
    Osoba(char* _imie,char* _nazwisko, int _wiek){
        imie = new char[strlen(_imie) + 1];
        nazwisko = new char[strlen(_nazwisko) + 1];
    strcpy(imie, _imie);
    strcpy(nazwisko, _nazwisko);
    wiek = _wiek;
    }
    ~Osoba(){
    delete[] imie;
    delete[] nazwisko;
    }
    Osoba(const Osoba& inna){

        imie = new char[strlen(inna.imie) + 1];
        nazwisko = new char[strlen(inna.nazwisko) + 1];
    strcpy(imie, inna.imie);
    strcpy(nazwisko, inna.nazwisko);
    wiek = inna.wiek;
    }
    Osoba& operator=(const Osoba& inna){
        if(this != &inna){
            delete[] imie;
        delete[] nazwisko;

        imie = new char[strlen(inna.imie) + 1];
        nazwisko = new char[strlen(inna.nazwisko) + 1];
    strcpy(imie, inna.imie);
    strcpy(nazwisko, inna.nazwisko);
    wiek = inna.wiek;
        }
        return *this;
    }
    void ustawWiek(int _wiek){
    wiek = _wiek;
    }
    void drukuj(){
    cout << imie << " " << nazwisko << " " << "Wiek:" << wiek  << endl;
    }
    bool starszaNiz(const Osoba& osoba){
    if(this->wiek > osoba.wiek)// wiek > osoba.wiek
        return true;
    return false;
    }
    bool imiennik(const Osoba& osoba){
        return strcmp(imie, osoba.imie) == 0;
    }

};

int main()
{
    Osoba x;
    Osoba y;
    x = Osoba("Marcin","Siemek",0);
    x.drukuj();
    y = Osoba("Marcin", "Izdebski",0);
    y. drukuj();
    x.ustawWiek(20);
    y.ustawWiek(21);
    cout << endl << x.starszaNiz(y) << endl;
    cout << x.imiennik(y) << endl;

    return 0;
}
