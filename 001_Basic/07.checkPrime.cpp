#include <iostream>
// #include <cmath>
using namespace std;

int main(){
    int num;
    cout << "enter number: ";
    cin >> num;

    //alternate for this : i < sqrt(num)
    for (int i = 2; i < num; i++){
        if(num % i == 0){
            cout << "prime number" << endl;
            break;
        } else {
            cout << "composite number" << endl;
            break;
        }
    }
    return 0;
}