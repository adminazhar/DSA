#include<iostream>
using namespace std;


// Pattern: Square Pattern with numeric value (Items are same as row number)
// 3 2 1
// 3 2 1
// 3 2 1

int main() {
    int n;
    cout << "Enter value of N: " << endl;
    cin >> n;

    int i=1;

    while (i <= n) {
        int j=1;
        while (j <= n) {
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        
        i++;
    }

}