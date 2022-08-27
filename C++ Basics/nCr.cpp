#include<iostream>
using namespace std;

/**
 * Function for calculating nCr
 * n! / r! (n-r)!
 * Calculate factorial separately then use it in ncr
 * 
*/


int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int ans = (factorial(n) / (factorial(r) * factorial(n-r)));
    return ans;
}


int main(){
    int n,r,ans;
    cout << "Please enter value of n: " << endl;
    cin >> n;

    cout << "Please enter value of r: " << endl;
    cin >> r;

    cout << nCr(n,r);
    return 0;

}