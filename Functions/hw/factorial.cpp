#include <iostream>
using namespace std;
 long int factorial( long int n){
   
   long int ans=1;
   for (int i=1;i<=n;i++){
    ans =ans*i;

   }
return ans ;
}
int main () {
cout<<factorial(43);
return 0;
  }