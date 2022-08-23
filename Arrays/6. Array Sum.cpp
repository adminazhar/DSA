#include <iostream>
using namespace std;

/**
 *  Print sum of all elements in an array
 */


int SumArr(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}


int main() {
    int size;
    cout << "Enter the array size: " << endl;
    cin >> size;

    int arr[100];

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "The sum of all values in array is: " << SumArr(arr, size) << endl;

}