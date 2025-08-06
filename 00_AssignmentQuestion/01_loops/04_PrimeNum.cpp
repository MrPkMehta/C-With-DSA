#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number to check prime: ";
    cin >> n;

    for (int i = 2; i < n; i++){
        if(n % 2 == 0) {
            cout << "not a prime number" << endl;
            break;
        } else {
            cout << "it is a prime number" << endl;
            break;
        }
    }
    return 0;
}
