#include <iostream>
#include <algorithm>
#include <vector>
int exponenetiation (int a,int b ){
    int ans =1;
     while (b>0){
        if (b & 1){
          // odd 
          ans=ans*a;
        }
        a=a*a;
        b>>=1;

     }
     return ans;
}
using namespace std;
int main () {
    cout<<exponenetiation(2,5);
return 0;
  }