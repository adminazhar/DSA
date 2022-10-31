#include <iostream>
using namespace std;
/**
 * @adminazhar
 * Basic Array Concepts
 *
*/
int main() {
    // Declaration
    int number[5];
    
    // Accessing/Printing
    cout << "Value: " <<  number[4] << endl;

    // Initializing
    int hellonum[5] = {9,8,7,6,5};
    cout << "Value: " << hellonum[3] << endl;


    // Only specifying few values
    int num3[15] = {2,5};
    for(int i=0; i<15;i++) {
        cout << "Value at: " << i << " index is: " << num3[i] << endl;
    }


    // Specifying all values 0
    int num4[15] = {0};
    for(int i=0; i<15;i++) {
        cout << "Value at: " << i << " index is: " << num4[i] << endl;
    }

    return 0;
}