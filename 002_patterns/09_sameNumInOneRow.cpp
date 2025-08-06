#include <iostream>
using namespace std;

int main(){
    int n = 9;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << i; //when i = 1 it will print 1 and so on
        }
        cout << endl;
    }
    return 0;
}