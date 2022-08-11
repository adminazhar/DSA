#include <iostream>
using namespace std;


int main() {
    // global var
    int a = 5;

    if (1) {
        // will print global var
        cout << a << endl;
        // local var
        int a = 3;
        // will print local vr
        cout << a << endl;
    }

    // will print global var
    cout << a <<endl;




}