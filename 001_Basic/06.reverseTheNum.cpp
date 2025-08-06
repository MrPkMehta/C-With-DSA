#include <iostream>
using namespace std;

int main(){
    int num = 987635;
    
    while (num > 0){
        int lastdigit = num % 10;
        cout << lastdigit;
        num /= 10;
    }
    cout << endl;
    return 0;
}