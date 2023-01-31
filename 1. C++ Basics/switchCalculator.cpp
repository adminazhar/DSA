/**
 * Calculator using Switch
*/

#include <iostream>
using namespace std;


int main (){
    int num1,num2;
    char op;
    cout << "Enter First Number: " << endl;
    cin >> num1;
    cout << "Enter Second Number: " << endl;
    cin >> num2;
    cout << "Enter the operation: " << endl;
    cin >> op;

    switch(op) {
        case '+':
            cout << "The sum is: " << (num1+num2) << endl;
            break;
        case '-':
            cout << "The Minus is: " << (num2-num1) << endl;
            break;
        case '*':
            cout << "The Multiply is: " << (num2*num1) << endl;
            break;
        case '/':
            cout << "The Divide is: " << (num2/num1) << endl;
            break;
        default:
            cout << "No operation provided";
    }
}