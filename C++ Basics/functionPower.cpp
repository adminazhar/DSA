#include <iostream>
using namespace std;


int power(int a, int b) {
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int a, b;
    cout << "Please enter number 1 and number 2" << endl;
    cin >> a >> b;

    int answer = power(a,b);
    cout << answer;

}