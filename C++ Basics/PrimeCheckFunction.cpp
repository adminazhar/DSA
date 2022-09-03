#include <iostream>
using namespace std;

/**
 * @author Azhar Khan
 * @email admin@azhark.com
 * Prime Check using function
*/

bool primeCheck(int n) {
    for(int i=2; i<n; i++){
        // true if not a prime number
        if(n%i == 0){
            return 0;
        }
    }
    // If not returned means it is prime
    return 1;
}

int main(){
    cout << "Please enter the number to check: ";
    int n;
    cin >> n;

    if(primeCheck(n)) {
        cout << "It is a prime number!" << endl;
    } else {
        cout << "It is a not prime number!!" << endl;
    }
    return 0;
}