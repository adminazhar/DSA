#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter value of N: " << endl;
    cin >> n;

    int i = 2;

    while (i < n) {
        if (n%i == 0){
            cout << "This is not prime number";
        }
        i++;
    }


}