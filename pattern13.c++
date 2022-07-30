#include<iostream>
using namespace std;


// Pattern: char increasing letters 
// A B C
// D E F
// G H I


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;

    int row = 1;
    char start = 'A';
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            cout << start << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
    }

}