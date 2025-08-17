#include <iostream>
#include <math.h>
using namespace std;
bool rowne(int t1[],int t2[],int r){
    for(int i = 0; i <= r - 1; i++){
        if(t1[i] == t2[i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int max2(int t[], int r){
    int s = t[0];
    int druga;
    for(int i = 1; i <= r - 1; i ++){
        if(t[i] > s){
            druga = s;
            s = t[i];
        }
    }
    return druga;
}
double srednia(double t[], int r){
    int a = 0;
    for(int i = 0; i <= r - 1; i++){
        a += t[i];
    }
    return a/r;
}
double odchylenie(double t[], int r){
double o = 0;
for(int i = 0; i <= r - 1; i ++){
    o += t[i]*t[i]/r;
}
o = sqrt(o - srednia(t,r)*srednia(t,r));
return o;
}
bool niemalejaca(int t[], int r){
for(int i = 1; i < r ; i ++){
    if(t[i] < t[i - 1]){
        return false;
    }
}
return true;
}
void naKoniec(int t[], int r){
    t[r - 1] = t[0];
    for(int i = 0; i < r; i++)
        cout << t[i] << " ";
}
void wspak(int t[], int r){
    int nowa[r]{};
    for(int i = 0; i <=  r - 1; i ++ ){
        nowa[i] = t[r - i - 1];
    }
    for(int i = 0; i < r; i++)
        cout << nowa[i] << " ";
}
int nwd(int t[], int r){

}
int main()
{
    int test1[6]{1,2,4,4,5,7};
    int test2[5]{1,2,3,4,5};
    int test3[3]{1,1,1};
    return 0;
}
