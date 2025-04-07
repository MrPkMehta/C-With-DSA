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
    int n;
    cout << "enter a numbner: ";
    cin >> n;


   cout << "prime numbers from 2 to " << n << " are : ";
   for(int i = 2; i < n; i++) {
    if(isPrime(i)){
        cout << i << " ";
    }
    
   }
    cout << endl;
    return 0;
}