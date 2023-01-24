#include <iostream>
using namespace std;

/**
  Sum of n numbers using for loop
*/

int main() {
    int n,sum=0;
    cout << "Please Enter value of N:" << endl;
    cin >> n;

    for(int i=0; i<=n; i++) {
        sum += i;
    }

    cout << "Sum is: " << sum <<endl;

}