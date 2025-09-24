#include <iostream>
using namespace std;
int main() {
    cout<<"Enter numbers(0 for stopping): ";
    int num,top,newnum;
    top=num;
    cin>>num;
    while(newnum!=0) {
        cout<<"Enter number(0 for stopping): ";
        cin>>newnum;
        if (newnum>top) {
            top=newnum;
        }
    }
    cout<<"Max is "<<top<<endl;
}