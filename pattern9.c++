#include<iostream>
using namespace std;


// Pattern: Triangle numeric increasing count value with row start with row no
// 1
// 2 3
// 3 4 5
// 4 5 6 7


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;
    
    
    int row = 1;

    while (row <= n) {
        int col = 1;
        int count = row;
        while (col <= row) {
            cout << count << " ";
            count = count + 1;
            col++;
        }
        cout << endl;
        row++;
    }

}