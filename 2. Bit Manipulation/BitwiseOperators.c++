#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 6;

    // Bitwise Operators
    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " ~b " << (~b) << endl;
    cout << " a^b " << (a^b) << endl;

    // Left Shift & Right Shift
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;

    // Post Increment/Decrement & Pre Increment/Decrement
    int l = 5;
    cout << (l++) << endl;
    cout << l << endl;
    
    int m = 5;
    cout << (++m) << endl;
    cout << m << endl;

    int n = 5;
    cout << (n--) << endl;
    cout << n << endl;
    
    int o = 5;
    cout << (--o) << endl;
    cout << o << endl;

}