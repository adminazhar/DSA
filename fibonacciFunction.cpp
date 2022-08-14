#include <iostream>
using namespace std;

/**
 * @author Azhar Khan
 * @email admin@azhark.com
 * Fibonacci using Function
 * 0 1  1   2  3 5 8 13
 * a b sum
 *   a  b  sum
*/

int fibonacci(int n) {

    int a=0;
    int b=1;
    int sum;
    for(int i=2; i<n; i++) {
        sum = a+b;
        a = b;
        b = sum;
    }
    return sum;
}


int main(){
    int n;
    cout << "Please enter value of n: ";
    cin >> n;

    cout << "nth element value is:" << fibonacci(n);
    return 0;
}