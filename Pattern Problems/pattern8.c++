#include<iostream>
using namespace std;


// Pattern: Triangle numeric increasing count value
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;
    
    int count = 0;
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            count = count + 1;
            cout << count << " ";
            col++;
        }
        cout << endl;
        row++;
    }

}