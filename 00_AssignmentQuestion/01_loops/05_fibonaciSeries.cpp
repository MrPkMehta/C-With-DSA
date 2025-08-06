#include <iostream>
using namespace std;

int main(){
int n;
cout << "enter n : ";
cin >> n;

int first = 0;
int second = 1;

for (int i = 1; i < n; i++){
    int third = first + second;
    cout << third << " ";
    first = second;
    second =  third;
}

cout << endl;
return 0;
}