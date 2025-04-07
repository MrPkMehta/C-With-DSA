#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;  //negative numbers are not prime

    for (int i = 2; i < n; i++) {
        if (n % i == 0) { //check the number is divisible by any number or not
            return false;
        }
    }
    return true; // if every condition is satisfied then return it is a prime
}

int main () {
    int num;
    cout << "enter a numbner: ";
    cin >> num;


    if(isPrime(num)){
        cout << "It is a prime number" << endl;
    } else {
        cout << "it is not a prime number" << endl;
    }
    return 0;
}