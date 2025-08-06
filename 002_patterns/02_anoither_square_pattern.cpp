#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int num = 1; //we define hear because we want to update it after every iteration
    for (int i = 0; i < n; i++){ //outer loop
        for (int j = 0; j < n; j++){ //inner loop -> runs n times
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}