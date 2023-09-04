/*
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <iostream>
using namespace std;
int main () {
    int n;
     cin>>n;
     for (int i=0;i<n;i++){
        int space =n-i-1;
        // space 
        for ( int j=0;j<space;j++){
            cout <<" ";
        }
        // stars 
        for (int j=0;j<i+1;j++){
            cout<<"* ";

        }
        cout<<endl;

     }
return 0;
  }


