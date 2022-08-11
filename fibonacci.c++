#include <iostream>
using namespace std;

/**
 * Fibonacci Series
 * 0 1  1  2 3 5 8 13
 * a b sum
 * 
 * 0 1  1  2  3 5 8 13
 *   a  b sum
**/

int main() {
    int n;
    cout << "Please Enter Value of N: " << endl;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a;
    cout << b;
    for(int i=1; i<=n; i++) {
        int sum = a+b;
        a = b;
        b = sum;
        cout << sum;
    }

}