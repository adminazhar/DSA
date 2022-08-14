#include <iostream>
using namespace std;


void printArray(int arr[], int size) {
    cout << "---PRINT START---" <<endl;
    for(int i=0;i<size;i++){
        cout << "Value at: " << i << " is: " << arr[i] << endl;
    }
    cout << "---PRINT END---" <<endl;
}


int main() {
    int n;
    cout << "Please enter array size: " << endl;
    cin >> n;

    int number[n] = {0};
    printArray(number, n);



}