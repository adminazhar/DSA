#include <iostream>
using namespace std;
/**
 * @adminazhar
 * Using arrays in functions
 * we can use int size = sizeof(arr)/sizeof(int) for calculating size,
 *  but it will consider empty/garbage elements too.
*/

void printArray(int arr[], int size) {
    cout << "---PRINT START---" <<endl;
    for(int i=0;i<size;i++){
        cout << "Value at: " << i << " is: " << arr[i] << endl;
    }
    cout << "---PRINT END---" <<endl;
}

void printArrayChar(char arr[], int size) {
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

    char gotham[5] = {'g', 'o', 't', 'h', 'a'};
    printArrayChar(gotham, 5);


}