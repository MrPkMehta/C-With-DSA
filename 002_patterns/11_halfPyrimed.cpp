#include <iostream>
using namespace std;

int main(){
    int n = 4;
    
    for (int i = 1; i <= n; i++){
        int num = 1; //it will reset to 1 after every iteration
        for (int j = 1; j <= i; j++){
            cout << num << " "; // we can also replace num with j to princt directly without extra variable
            num++;
        }
        cout << endl;
    }
    return 0;
}