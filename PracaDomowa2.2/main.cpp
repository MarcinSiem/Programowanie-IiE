#include <iostream>
using namespace std;
/*int sumaDzielnikow(int n) // suma dzielnik�w w�a�ciwych, np.
sumaDzielnikow(10)=1+2+5=8*/
/*Liczby ca�kowite a i b s� zaprzyja�nione je�li
a==sumaDzielnikow(b) i b==sumaDzielnikow(a)
Napisa� funkcj�
void zaprzyjaznione(int max)
kt�ra znajduje wszystkie pary liczb zaprzyja�nionych nie wi�kszych ni� max
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
