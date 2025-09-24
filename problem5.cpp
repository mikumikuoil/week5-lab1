#include <iostream>
using namespace std;
int main() {
    int c=0;
    char car='A';
    for (car; car<='Z'; ++car) {
        cout << car <<" ";
        c=c+1;
        if (c%5==0) {
            cout << endl;
        }

    }
}