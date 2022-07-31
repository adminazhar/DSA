#include<iostream>
using namespace std;


// Pattern: Stars triangle (col = i)
// *
// * *
// * * *

int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

}