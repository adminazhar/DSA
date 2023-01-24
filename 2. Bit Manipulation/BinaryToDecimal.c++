/**
 * Decimal to Binary Conversion with C++
 * ans = (digit x 10^i) + ans
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int bits;
    cin >> bits;

    int ans = 0;
    int i = 0;
    while (bits != 0) {
        // Get last digit
        int digit = bits % 10;

        // Check if bit is 1
        if ( digit == 1 ) {
            ans  = ans + (pow(2,i));
        }
        bits = bits / 10;
        i++;
    }

    cout << "Result is: " << ans;
}