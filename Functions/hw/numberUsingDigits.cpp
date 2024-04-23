#include <iostream>
#include<cmath>
using namespace std;
int  printAllDigits(int n){
    int ans=0;

  for (int i=0;i<n;i++){
     int digit;
     cin>>digit;
    ans=(ans*10)+digit;
  }
  return ans;
}
int main () {
   
 cout<<printAllDigits(2);

return 0;
  }