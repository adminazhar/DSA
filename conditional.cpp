#include <iostream>
using namespace std;

// Condition If, else, if-else in C++

int main() {
    int a,b;
    cout << "Enter the value of A: " << endl;

    cin >> a;

    if (a > 0) {
        cout << "A is positive";
    } else if (a < 0) {
        cout << "A is negative";
    } else {
        cout << "A is zero";
    }


}