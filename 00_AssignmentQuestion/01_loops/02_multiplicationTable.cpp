#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number: ";
    cin >> n;

    for(int i = 1; i <= 10; i++){
        int multipilcation = n * i;
        cout << endl;
        cout << n << " * " << i << " = "<< multipilcation;
    }
    cout << endl;
    return 0;
}