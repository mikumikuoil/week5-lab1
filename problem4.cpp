#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int n;
    cin >> n;
    int i=1;
    for (i; i<=n; i++) {
        if (i%10==0) {
            cout << i << endl;
        }
    }
}