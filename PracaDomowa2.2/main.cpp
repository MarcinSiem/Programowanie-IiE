#include <iostream>
using namespace std;
/*int sumaDzielnikow(int n) // suma dzielników w³aœciwych, np.
sumaDzielnikow(10)=1+2+5=8*/
/*Liczby ca³kowite a i b s¹ zaprzyjaŸnione jeœli
a==sumaDzielnikow(b) i b==sumaDzielnikow(a)
Napisaæ funkcjê
void zaprzyjaznione(int max)
która znajduje wszystkie pary liczb zaprzyjaŸnionych nie wiêkszych ni¿ max
using namespace std;*/
int sumaDzielnikow(int n){
    int s = 0;
        for(int i = 1;i <= n - 1; i++){
        if(n % i == 0){
                s = s + i;
            }
        }
        return s;
}
void zaprzyjaznione(int max) {
    for (int i = 1; i <= max; i++) {
        int partner = sumaDzielnikow(i);
        if (partner <= max && partner != i && sumaDzielnikow(partner) == i) {
            cout << i << " " << partner << endl;
        }
    }
}
int main(){
    zaprzyjaznione(20);
    return 0;

}
