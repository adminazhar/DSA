#include<iostream>
using namespace std;


// Pattern: char same row letter increasing col (A+j-1)
// A B C
// A B C
// A B C


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col=1;
        while (col <= n) {
            char ch = 'A' + col -1;
            cout << ch << " ";
            // ch = ch+1;
            col++;
        }

        cout << endl;
        row++;
    }

}