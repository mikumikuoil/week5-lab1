#include <iostream>
using namespace std;
int main() {
    int total=0;
    int i=1;
    for (i; i<=10; i++) {
        cout << i << endl;
        total=total+i;
    }
    cout << total << endl;
}