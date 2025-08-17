#include <iostream>
#include <math.h>

using namespace std;
int nwd(int a, int b){
    if(b == 0)
        return a;
    return nwd(b, a%b);
}
int pytaj(){
    int n;
    cout << "podaj wiek:" << endl;
    cin >> n;
    if(n >= 0){
        cout << "twoj wiek to:" << n;
        return 1;
    }
    pytaj();
}
double potega(double a, int n){
    if(n >= 1){
        return  a * potega(a,n-1);
    }
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 1 / potega(a, -n);
    }
    return a;
}
void rozkladI(int n){
    cout <<"rozklad na czynniki pierwsze liczby " <<  n << " to" << endl;
    while(n > 1){
        for(int i = 2; i <=n; i++){
            if(n% i == 0){
            n /= i;
            cout << i << endl;
            break;
            }
        }
    }
}
void rozkladR(int n){
    if(n > 1){
        for(int i = 2; i <= n; i++){
            if(n % i == 0){
                cout << i << endl;
                rozkladR(n / i);
                return;
            }
        }
    }
}
int silnia(int n){
    if(n > 1)
        return n * silnia(n-1);
    return 1;
}
int dwumian(int n, int k){
    if(k > n) return 0;
    n = silnia(n)/(silnia(k)*silnia(n-k));
}
int dwumianR(int n, int k){
    if(k == 0 || k == n)
        return 1;
    return dwumianR(n - 1, k - 1) + dwumianR(n - 1, k);
}
int pierwiastki(double a, double b, double c){
    double delta = b*b - 4*a*c;
    int w;
    w = (delta > 0) ? 2 : (delta == 0 ? 1 : 0);
    return w;
}
int najmniejszyNieDzielnik(int n){
for(int i = 2;; i++){
    if(n % i != 0)
        return i;
    }
}
int sumaKwadratow(int n){
int s = 0;
for(int i = 1;i <= n; i ++){
    s = s + i*i;
}
return s;
}
void trojkatyProstokatne(int n){
    for(int a = 1;a <= n; a++){
        for(int b = a + 1; b <= n; b++){
            for(int c = b + 1;c<=n; c++){
                if(a * a + b * b == c * c && c * c <= n){
                    cout << a << "^2 + "<<b <<"^2 =" << c <<"^2" << endl;
                }
            }
        }
    }
}

int main()
{
        return 0;
}
