#include<iostream>
using namespace std;


// Pattern: char same row letter increasing col
// A A A
// B B B
// C C C


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            char ch = ('A' + row - 1);
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}