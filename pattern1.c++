#include<iostream>
using namespace std;


// Pattern: SQUARE PATTNER(Same row and column)
// ****
// ****
// ****
// ****

int main() {
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    
    int i=1;
    while (i<=n) {
        int j=1;
        while (j<=n) {
            cout << "*";
            j++;
        }
    cout << endl;
    i++;
    }

}