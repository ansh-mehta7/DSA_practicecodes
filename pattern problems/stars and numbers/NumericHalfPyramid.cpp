/*
1
12
123
1234
12345
*/


#include <iostream>
using namespace std;
int main () {
    int n;
    cin >>n ;
     for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<j+1;
        }
        cout<<endl;

     }
return 0;
  } 

1
1 2
1   3
1     4
1       5
1 2 3 4 5 6

#include <iostream>
using namespace std;
int main () {
    int n;
    cin >>n ;
     for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
        if (i==0|| j==0 || i==n-1|| j==i){
            cout<<j+1<<" ";
        }
            else cout<< "  ";
        }
        cout<<endl;

     }
return 0;
  } 