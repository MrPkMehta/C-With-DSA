#include <iostream>
using namespace std;



int sumOfDigits(int num) {
    int digitSum = 0;

    while(num > 0) {
       int  lastDigit = num % 10; //gives last digit
       num = num / 10; //eleminiate the last digit
       digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    int result = sumOfDigits(4893); //store the function call in a variable
    cout << "sum of digits: " << result << endl; //call the result
    cout << "sum of digits: " << sumOfDigits(56729) << endl; //directly call the result without storing in a variable
    return 0;
}