#include <iostream>
using namespace std;
int main() {
    int i=1;
    for (i; i<=100; i++) {
        if (i%5!=0) {
            cout << i << endl;
        }
    }
}