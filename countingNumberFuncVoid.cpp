#include <iostream>
using namespace std;

/**
 * @author Azhar Khan
 * @email admin@azhark.com
 * Counting program with function void
*/

void countNumber(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Please enter value of N: " << endl;
    cin >> n;

    countNumber(n);
    return 0;
}