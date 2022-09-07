#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end) {

        // If found at mid point, then return the mid index
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid]) {
            // If key is great than mid value then choose right, means move start to next of mid and leave end as it is.
            start = mid + 1;
        } else {
            // If key is less the mid value then choose left, means move end to next of mid and leave start as it is.
            end = mid - 1;
        }

        // Update the mid at each iteration
        mid = (start + end ) / 2;
    }

    // If not found return -1
    return -1;
}



int main() {

    int oddArr[5] = {2,5,6,9,13};
    int evenArr[6] = {1,6,9,11,23,44};

    int evenFoundat = BinarySearch(evenArr, 5, 9);

    cout << "Search for 9 is: " << evenFoundat << endl;


    int oddFoundat = BinarySearch(oddArr, 5, 13);

    cout << "Search for 13 is: " << oddFoundat << endl;

}