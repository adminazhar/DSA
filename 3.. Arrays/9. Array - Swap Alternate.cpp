#include <iostream>
using namespace std;

/**
 * Swap Alternate Elements in an Array
 * arr[5] = {1,2,7,8,5}
 * Result = arr[5] = {2,1,8,7,5}
 * Same for even/odd
 */

void swapAlternate(int arr[], int size){
    
    for(int i=0; i<=size-1; i+=2) {
        if (i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }

}

void printArray(int arr[], int n) {
    for(int i=0; i<=n-1;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[6] = {1,3,2,7,11,8};
    
    int brr[5] = {5,10,3,9,-2};

    swapAlternate(arr, 6);
    swapAlternate(brr, 5);

    printArray(arr, 6);
    
    printArray(brr, 5);
}