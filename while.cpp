#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Please enter value of n:" << endl;
    // cin >> n;
    
    // int i=1;
    // while (i <= n) {
    //     cout << i << " ";
    //     i++;
    // }

    // Sum
    int n;
    cout << "Please enter value of n:" << endl;
    cin >> n;
    int i=1;
    int sum = 0;
    while (i<=n) {
        sum = sum + i;
        i++;
    }
    cout << "The sum is: " << sum << endl;


}