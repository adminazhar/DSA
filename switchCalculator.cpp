#include <iostream>
using namespace std;


int main (){
    int num1,num2;
    cout << "Please enter number 1: " << endl;
    cin >> num1;
    cout << "Please enter number 2: " << endl;
    cin >> num2;

    char op;
    cout << "Please enter operation: + - / *" <<endl;
    cin >> op;

    switch (op) {
        case '+' : 
            cout  << "Addition is : " << (num1+num2) << endl;
            break;
        case '-' : 
            cout  << "Substraction is : " << (num1-num2) << endl;
            break;
        case '/' : 
            cout  << "Division is : " << (num1/num2) << endl;
            break;
        case '*' : 
            cout  << "Multiplication is : " << (num1+num2) << endl;
            break;
        default:
            cout << "Please enter operation" << endl;
            break;
    }
}