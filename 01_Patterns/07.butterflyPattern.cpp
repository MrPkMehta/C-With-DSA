#include<iostream>
using namespace std;

int main() {
    int n = 4;

    //first half
    for (int i = 0; i < n; i++) {  //outer loop

        //stars
        for(int j = 0; j < i+1; j++) {
            cout << "*";
        }
        //cout<<endl;
        
        //spaces
        for(int j = 0; j < 2*(n-i-1); j++ ){
            cout << " ";
        }

        //stars
        for (int j = 0; j< i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //2nd half
    for (int i = 0; i < n; i++) { //outer loop

        //stars
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }

        //spaces
        for (int j = 0; j < 2*i; j++) {
            cout << " ";
        }

        //stars
        for (int j = 0; j < n-i; j++) {
            cout<< "*";
        }
        cout << endl;
    }
    return 0;
    
}


/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/