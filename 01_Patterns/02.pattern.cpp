#include <iostream>
using namespace std;

int main() {
    int n = 4;
 
    for ( int i = 1; i <= n; i++) //outer loop print row
    {
       for ( int j = 1; j <= n; j++) //inner loop print column or value
       {
        cout<< j << " ";
       }
       cout << endl;
    }
    return 0;
}


/* 
1234
1234
1234
1234
*/


