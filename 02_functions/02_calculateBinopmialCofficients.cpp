#include <iostream>
using namespace std;


//this function calculate the factorinal of n numbers
int factorial(int n){
    int fact = 1; //factorial must be initilize with 1;

    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


//hear we can we call the function inside the function
int nCr(int n, int r) {
    int factOfN = factorial(n);
    int factOfR = factorial(r);
    int factOfNMinusR = factorial(n-r);

    return factOfN / (factOfR * factOfNMinusR);
}

int main(){
    int n = 9, r = 2;
    cout << "nCr :" << nCr(n, r) << endl;
    cout << "The Binomial cofficient of a number are : " << nCr(8,2) << endl;
    return 0;
}
