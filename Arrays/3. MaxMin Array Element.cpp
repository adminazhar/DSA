#include <iostream>
using namespace std;
/**
 * Check the maximum value in the array and the minimum
*/ 

int getMax(int num[], int size) {
    // Create a var to compare and replace
    int max = INT_MIN;
    for (int i=0; i<size; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}


int getMin(int num[], int size) {
    // Create a var to compare and replace
    int min = INT_MAX;
    for (int i=0; i<size; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    // Get size
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;

    // Create array of size 100, we will not use size var because its not good, bad practice
    int num[100];

    for(int i=0; i<size; i++) {
        // Get array element value input
        cin >> num[i]; 
    }
    
    cout << "The maximum element in the array is: " << getMax(num, size) << endl;
    
    cout << "The minimum element in the array is: " << getMin(num, size) << endl;
}