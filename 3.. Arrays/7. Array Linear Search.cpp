#include <iostream>
using namespace std;

/**
 * Array Linear Search
 */ 

bool search(int arr[], int size, int key) {
    for(int i = 0; i<size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main (){

    int arr[10] = {5, 50, 10, -3, 90, 1, -10, 8, 0, 11};
    cout << "Enter the element to search: " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

}