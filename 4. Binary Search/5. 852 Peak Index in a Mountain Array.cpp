// Leetcode Problem: 852. Peak Index in a Mountain Array
// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <iostream>
using namespace std;



int main() {
    int arr[5] = {0,10,15,5,2};
    int size = 5;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end) {
        if (arr[mid] < arr[mid+1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }

    cout << "Peak Mountain is at index: " << start << endl;
}