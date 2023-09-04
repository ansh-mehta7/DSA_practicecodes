
1
2*2
3*3*3
4*4*4*4
3*3*3
2*2
1 

#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
     for (int i=0 ;i<n;i++){

        for (int j=0;j<2*i+1;j++){
            if (j%2!=0) cout<<"*";
           else  cout<< i+1;
        }
        cout<<endl;
     }
     for (int i=0;i<n-1;i++){
        for (int j=0;j<2*(n-1)-2*i-1;j++){
            if (j%2!=0) cout<<"*";
             else cout<<n-i-1;
        }
        cout<<endl;
     }

return 0;
  }