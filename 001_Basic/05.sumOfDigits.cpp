#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter number to find sum : ";
    cin >> num;
    
    int digitSum = 0;

    while(num > 0) {
        int lastDigit = num % 10;
        // if(lastDigit % 2 != 0){
        //     digitSum += lastDigit;
        // }
        digitSum += lastDigit;
        num /= 10;
    }
    cout << "Sum Of Digits are : " << digitSum << endl;
    return 0;
}