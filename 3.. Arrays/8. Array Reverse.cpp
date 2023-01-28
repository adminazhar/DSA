#include <iostream>
using namespace std;

/**
 * Reverse the elements of an array
 * arr[5] = {1,2,3,4,5}
 * then reverse should be
 * arr[5] = {5,4,3,2,1}
 */ 

int reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int printarr(int arr[], int n) {
    for(int i=0; i<=n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[6] = {3,1,9,2,-1,77};
    int brr[5] = {9,4,5,2,1};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    cout << printarr(arr, 6) << endl;
    cout << printarr(brr, 5) << endl;
}