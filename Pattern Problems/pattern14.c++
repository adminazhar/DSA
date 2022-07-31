#include<iostream>
using namespace std;


// Pattern: char increasing letters, row, col same start index(A+i+j-2)
// A B C
// B C D
// C D E


int main() {
    int n;
    cout << "Please enter the value of N: " << endl;
    cin >> n;

    int row = 1;

    while (row <= n){
        int col =1;
        while (col <=n){
            char start = 'A';
            start = start + row + col - 2;
            cout << start << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    
    

}