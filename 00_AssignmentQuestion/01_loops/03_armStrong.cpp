#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "enter number to check armstrong: ";
    cin >> n;

    int originalNum = n; // to save the original number
    int cubesum = 0;

    while (n > 0){
        int lastDigit = n % 10;
        cubesum += lastDigit * lastDigit * lastDigit;
        n /= 10; //at this phase n == 0
    }

    //we compare with original number because at the end of the loop n == 0;
    if(originalNum == cubesum) {
        cout << "this is armstrong number" << endl;
    } else {
        cout << "not an armstrong number" << endl;
    }
    return 0;
}