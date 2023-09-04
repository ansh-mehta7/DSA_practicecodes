/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/


#include <iostream>
using namespace std;
int main () {
    int n;
    cin >>n ;
     for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;

     }
return 0;
  } 