#include <iostream>

using namespace std;

double potega(double x, int d){
    if(x == 0 && d <= 0){
            cout << "wyrazenie nieokreslone";
            return 0;
    }
    double p = 1;
    if(d == 0){
        p = 1;
    }
    else if(d > 0){
        for(int i = 1; i <= d; i++){
            p = p * x;
        }
    }
    else if(d < 0){
        for(int j = 1; j <= -d; j++){
            p = p / x;
        }
    }
    return p;
}
int silnia(int n){
    int w = 1;
if(n > 0){
    for(int i = 1; i <= n; i++){
        w *= i;
    }
}
if(n < 0){
    return 0;
}
return w;
}
double exp(double x){
    double s = 0;
for(int i = 0; i <= 10; i ++){
//    double l = potega(x,i);
//    double m = silnia(i);
//    double w = l/m;
    s = s + potega(x,i)/silnia(i);
}
return s;
}
int main()
{
cout << exp(1) << endl;
cout << exp(2) << "\n";
cout << exp(-1) << endl;
int i = 1;
    int n;
    cout << "podaj naturalne n";
    cin >> n;
    if(n >= 1){
    int p = 1;
    cout << p << endl;
    while(i <= n){
        p = p*2;
        	if(p <= n){
        		cout << p << endl;
        		i = i + 1;
        }
        else{
            break;
        }
    }
    }
    else{
        cout << "liczba nie spe³nia kryterium";
    }
return 0;
}
