#include <iostream>
#include <utility>
#include <stdexcept>

using namespace std;

class Czas{
private:
    int godzina;
    int minuta;
    string format;
public:
    Czas(){
    godzina = 0;
    minuta = 0;
    format = "EU";
    }
    Czas(int g, int m, string f){
    if(g < 0 || g >= 24 || m >= 60 || m < 0){
        throw logic_error("Nie ma takiej godziny");
    }
    if(f != "EU" || f != "AM" || f != "PM"){
        throw logic_error("Zle wybrany format");
    }
        godzina = g;
        minuta = m;
        format = f;
    }
    ~Czas() = default;
    Czas drukuj() const{
    cout << godzina << ":" << minuta << " " << format;
    }
    void wczytaj(){
    int g, m;
    string f;
    cout << "Podaj format(EU/AM/PM)";
    cin >> f;
    cout << "Podaj godzine:";
    cin >> g;
    cout << "Podaj minute:";
    cin >> m;
    if(g < 0 || g >= 24 || m >= 60 || m < 0){
        throw logic_error("Zle wybrana godzina");
    }
    /*if(f != "EU" || f != "AM" || f != "PM"){
        throw logic_error("Zle wybrany format");
    }*/
    godzina = g;
    minuta = m;
    format = f;
    }
};

int main()
{
    Czas w;
    w.wczytaj();
    w.drukuj();
    return 0;
}
