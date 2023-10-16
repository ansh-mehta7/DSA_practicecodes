#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double myPow(double x, int n) {

       int p = abs(n);
       double ans = 1.0;
       while(p>=1){
         p-- ;
          ans *= x;
       }
       return n<0 ? 1/ans :ans ;    
    }
int main () {
   double s=5.2321;
   int n=1;
   cout<< myPow(s,n);
return 0;
  }