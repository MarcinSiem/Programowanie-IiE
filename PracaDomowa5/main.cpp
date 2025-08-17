#include <iostream>
#include <cstdlib>

using namespace std;
int dlugosc(char* s){
    int d = 0;
    for(int i = 0; s[i];i++){
        d++;
    }
    return d;
}
void drukujWspak(char* s){
    int l = 0;
    for(int p = 0;s[p]; p++){
        l++;
    }
for(int i = 0;s[i]; i++ ){
    cout << s[l - i - 1];
}
}
void drukujBezSpacji(char* s){
    for(int i = 0;s[i]; i++){
        if(s[i] != ' '){
            cout << s[i];
        }
    }
}
int ileWyrazow(char* s){
    int c = 0;
    for(int i = 0; s[i]; i++ ){
        if(s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0')){
        c++;
        }
    }
    return c;
}
int znajdz(char* s, char* t){ // Ÿle
    int c = 0;
    for(int i = 0 ; s[i]; i++){
        for(int j = 0; t[j]; j++){
            if(s[i] != t[j]){
                break;
            }
            c++;
        }
    }
    return c;
    }
    int potegaDodatnia(int a, int n){
    if(n == 0)
        return 1;
    return a * potegaDodatnia(a, n - 1);
    }
    int liczba(char* s){
    int l = dlugosc(s);
    int t[l]{};
    int w = 0;
    for(int i = 0; s[i]; i++){
        if(s[i] == '0'){
            t[i] = 0;
        }if(s[i] == '1'){
            t[i] = 1;
        }if(s[i] == '2'){
            t[i] = 2;
        }if(s[i] == '3'){
            t[i] = 3;
        }if(s[i] == '4'){
            t[i] = 4;
        }if(s[i] == '5'){
            t[i] = 5;
        }if(s[i] == '6'){
            t[i] = 6;
        }if(s[i] == '7'){
            t[i] = 7;
        }if(s[i] == '8'){
            t[i] = 8;
        }if(s[i] == '9'){
            t[i] = 9;
        }
    }
    for(int i = 0; i <= l - 1; i ++){
        w += t[i] * potegaDodatnia(10, l - i - 1);
    }
    return w;
    }
    bool anagramy(char* s, char* t){
        if(dlugosc(s) != dlugosc(t)){
           return false;
           }
    int w = 0;
    for(int i = 0; s[i]; i ++){
        for(int j = 0; t[j]; j++){
            if(s[i] == t[j]){
                w++;
                t[j] = ';';
                break;
            }
        }
    }
    /*int ret;
    ret = (w == dlugosc(s)) ? 1 : 0;
    return ret;*/
    if(w == dlugosc(s))
        return true;
    return false;
    }
    int znajdz2(char* s, char* t){
//która zwraca indeks pierwszego wyst¹pienia napisu t w s (lub -1 jeœli nie ma
//wyst¹pieñ).
    int w;
    for(int i = 0;s[i]; i++){
         if(s[i] == t[0]){
                w = i;
            for(int j = 0;t[j]; j++){
                if(s[i + j] != t[j]){
                w = -1;
                break;
                }
            }
         if(w != -1){
            return w + 1;
         }
         }
    }
    return w;
    }
    void wypelnij_los(int** t, int w, int k){
    for(int i = 0; i < w; i++){
        for(int j = 0; j < k; j++){
            t[i][j] = rand() % 100 + 1;
        }
    }
    for(int i = 0; i < w; i++){
        for(int j = 0;j < k; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    }
    void transpozycja(int** t, int n){
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            if(i != j){
                cout << t[j][i] << " ";
            }else{
                cout << t[i][j] << " ";
            }
        }
        cout << endl;
    }
    }

int main()
{
    int w,k;
    char sigma[] ="sigma";
    char napis[]=" dzien dobry sigma";
    char gisma[]= "aabb";
    char y[] = "y";
    //cout << znajdz2(napis,sigma);
    int **tab;
    tab = new int*[w];
    for(int i = 0; i < w; i++){
        tab[i] = new int[k];
    }
    wypelnij_los(tab, 4, 4);
    cout << "\n\n";
    transpozycja(tab, 4);
    /*for(int i=0; i<w; i++)
    delete[] tab[i];
    delete[] tab;*/
    return 0;
}
