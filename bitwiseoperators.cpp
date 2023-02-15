// decimal to binary  
#include <iostream>
#include<math.h>
 using namespace std;
  int main(){
     int n ;
      cin>>n ;
      int ans=0;
int i=0;
       while(n!=0){
         int bit =n&1;
         ans= (pow(10,i)*bit)+ ans;
         i++;
        n= n>>1;
       }
       cout<<ans;
       return 0;
  }
  // binary to decimal 
  #include <iostream>
#include<math.h>
 using namespace std;
  int main(){
     int n ;int ans=0;
     int i=0;
      cin>>n ;
      while(n!=0){
         int bit=n%10;
          if (bit ==1){
             ans = (pow(2,i)*bit)+ans;
          }
         n= n/10;
         i++;

      }
   cout<<ans;
      return 0;
      }
