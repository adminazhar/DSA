#include<iostream>
using namespace std;


// Pattern: Square Pattern with numeric value (Items are same as row number)
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

int main() {
    int n;
    cout << "Enter value of N: " << endl;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j<=n) {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

}