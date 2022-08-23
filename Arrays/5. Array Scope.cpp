#include <iostream>
using namespace std;
/**
 * Array scope
 * When passing an array in function, we pass array's first index position
 * We don't replicate the array inside the array like variable
 * If we update its value in another function, it will be also updated in main func
*/ 

int update(int arr[], int n) {
    
    cout << "Inside the update func START ----" << endl;
    for (int i=0; i<n; i++) {
        // Updating the arry value
        arr[2] = 420;
        cout << arr[i] << " ";
    }
    cout << "Inside the update func array END ----" << endl;
}

int main() {
   // Create an array with 3 values
   int arr[3] = {1,2,3};

    // We pass array's first index position and not whole array
    update(arr, 3);
   cout << endl;
    
   cout << "Inside the main func START ----" << endl;
   for (int i=0; i<3; i++) {
    cout << arr[i] << " ";
   }
   cout << "Inside the main func END ----" << endl;

}