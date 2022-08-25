#include <iostream>
using namespace std;
/**
 * Check Even/Odd with function
*/

bool isEven(int a) {
    if(a&1) {
        return 0;
    } else {
        return 1;
    }
}


int main() {
    int num;
    cout << "please enter number: " << endl;
    cin >> num;

    if(isEven(num)) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }


}