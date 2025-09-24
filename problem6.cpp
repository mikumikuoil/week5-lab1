#include <iostream>
using namespace std;
int main() {
    cout << "Enter number of classes: ";
    int cnum;
    cin >> cnum;
    int credit;
    float tmark;
    float total = 0.0;
    int tcred = 0;
    for (int i = 1; i <= cnum; i++) {
        cout << "Enter credit for subject : ";
        cin >> credit;
        cout << "Enter total mark for subject : ";
        cin >> tmark;
        total += credit * tmark;
        tcred += credit;
    }
    double gpa=total/tcred;
    cout << "Your total GPA is " <<gpa<<endl;
    return 0;
}
