#include<iostream>
using namespace std;


// Pattern: Square Pattern with numeric value (Items are same as row number)
// 1 2 3
// 4 5 6
// 7 8 9

int main() {
    int n;
    cout << "Enter value of N: " << endl;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n) {
        int j =1;
        while (j <= n){
            sum = sum + 1;
            cout << sum << " ";
            j++;
        } 
        cout << endl;
        i++;
    }

}