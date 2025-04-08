#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while(decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; //gives the output value
}

int main(){
    int decNum = 101;
    cout << decToBinary(decNum) << endl; //gives the binary of the number 50;


    //print the binary of the number 0 to 10;
    int n  = 10;
    for (int i = 0; i < n; i++){
        cout << decToBinary(i) << endl;
    }
    return 0;
}