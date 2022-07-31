#include<iostream>
using namespace std;


// Pattern: Triangle numeric descreasing count value with row start with row no
// 1
// 2 1
// 3 2 1
// 4 3 2 1


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;
    
    // One way
    // int row = 1;
    // while (row <= n) {
    //     int col = 1;
    //     int count = row;
    //     while (col <= row) {
    //         cout << count << " ";
    //         count = count - 1;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Another way (i-j+1)

    int row = 1;
    while (row <= n) {
        int col =1;
        while (col <= row) {
            cout << (row - col + 1) << " ";
            col++;
        }

        cout << endl;
        row++;
    }

}