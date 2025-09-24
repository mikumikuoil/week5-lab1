#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int num,rev=0;
    cin >> num;
    while (num != 0) {
        int d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    cout<<rev;
}