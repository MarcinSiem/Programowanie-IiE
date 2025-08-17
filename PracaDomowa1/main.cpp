#include <iostream>

using namespace std;

int main()
{
    int i;
    i = 1;
    while(i <= 10){
            int j = 1;
            while(j <= 10){
                cout << i * j << endl;
                j = j + 1;
            }
            i = i + 1;
    }
    return 0;
}

