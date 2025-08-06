#include <iostream>
using namespace std;

int main() {
    int n = 4;
    // char ch = 'A'; (it becomes global variable and increase by =1 after every iteration and not reset to initial value)
    for (int i = 0; i < n; i++){
        char ch = 'A'; //we define hear because we want to reset on evafter every iteration
        for (int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}