#include <iostream>
using namespace std;
/**
 * Check the maximum value in the array and the minimum
 * using max() and min() function for comparison
*/ 

int getMax(int num[], int size) {
    // Create a var to compare and replace
    int maxi = INT_MIN;
    for (int i=0; i<size; i++) {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}


int getMin(int num[], int size) {
    // Create a var to compare and replace
    int mini = INT_MAX;
    for (int i=0; i<size; i++) {
        mini = min(mini, num[i]);
    }
    return mini;
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