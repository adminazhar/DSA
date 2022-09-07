#include <iostream>
using namespace std;

// Leetcode Problem: Find First and Last Position of Element in Sorted Array
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
int firstOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;
    
    int ans = -1;
    
    while (start <= end) {
        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        } 
        else if(key < arr[mid]) {
            end = end -1;
        }
    mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    int ans = -1;
    while (start <= end) {
        if (key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else if (key < arr[mid]) {
            end = mid - 1;
        }
    mid = start + (end - start) / 2;
    }
    return ans;
}



int main() {
int arr[5] = {1,2,3,3,5};
cout << "First occurance of 3 is at Index: " << firstOccurance(arr, 5, 3);
cout << endl;
cout << "Last occurance of 3 is at Index: " << lastOccurance(arr, 5, 3);

}