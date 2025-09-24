#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int num;
    cin >> num;
    int c = 0;
    if (num <= 1)
        cout <<"NOT prime";
    else {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                c++;
        }
        if (c > 2)
            cout <<"NOT prime";
        else
            cout <<"prime";
    }
    return 0;
}