#include<iostream>
using namespace std;


// Pattern: Triangle numeric
// 1
// 2 2
// 3 3 3

int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }

}