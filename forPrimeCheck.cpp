#include <iostream>
using namespace std;

/**
 * Prime check with forLoop
 * n = 7
 * 1 2 3 4 5 6 7
 * we will leave first and last element,
 * i = 2 --> i <= (n-1)
**/

int main() {
    int n;
    cout << "Please the number to check: " << endl;
    cin >> n;
    bool isPrime = 1;
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1) {
        cout << "It is a prime number";
    } else {
        cout << "It is not a prime number";
    }

}