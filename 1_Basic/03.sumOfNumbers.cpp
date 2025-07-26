#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    
    cout << "Enter the number to find sum: ";
    cin >> n;

    for(int i = 0; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of the number "<< n << " is :" <<sum << endl;
    return 0;
    
}