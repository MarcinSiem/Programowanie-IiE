#include <iostream>
#include <vector>

using namespace std;
void rejestr(){
vector<int> t;
int i;
do{
    cout << "podaj liczbe: ";
    cin >> i;
    t.push_back(i);
}while(i != 0);
for(int i = 0; i < t.size(); i++){
    cout << t.at(i) << " ";
}
}
vector<int> czynniki(int n){
vector<int> t;
if(n > 1){
        for(int i = 2; i*i <= n; i++){
            while(n % i == 0){
            n /= i;
            t.push_back(i);
            }
    }
    if(n > 1){
            t.push_back(n);
    }
}
return t;
}
string odwroc(string s){
string w;
for(int i = s.size() - 1; i >= 0; i--){
    w.push_back(s[i]);
}
return w;
}
void tekst(){
vector<char> s;
cout << "Podaj tekst: " << endl;
int i = 0;
do{
    cin >> s[i];
}while(s[i] = 'q');
for(int i = 0; i <= s.size() - 1; i++){
cout << "\n\n" << s[i] << "\n\n";
}
int liczba_linii = 1;
for(int i = 0; s[i]; i++){
    if(s.at(i) == '\n'){
        liczba_linii++;
    }
}
cout << "liczba linii to " << liczba_linii;
}
int main()
{
    //rejestr();
    /*int n;
    cout << "podaj liczbe: ";
    cin >> n;
    for(int i = 0; i < czynniki(n).size(); i++){
    cout << czynniki(n).at(i) << ' ';
    }*/
    //int *p;
    //string a = "kamilslimak";
    //cout << odwroc(a);
    tekst();
    return 0;
}
