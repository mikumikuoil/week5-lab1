#include <iostream>
using namespace std;
int main() {
    cout<<"Enter a number: ";
    int num,sum=0;
    cin>>num;
    for (int i = 1; i <=num; i++) {
        cout<<i<<" * "<<i<<" = "<<i*i<<endl;
        sum=sum+i*i;
    }
    cout<<sum<<endl;
}