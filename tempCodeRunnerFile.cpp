#include <iostream>
using namespace std ;
 int main (){
     int n ;
  cin>>n;
      int a= 0;
      int b =1;
int sum;
      if(n==1){
        sum=0;
      }
      if(n==2){
        sum=1;
      }

int i=2;
// cout<<a<<" "<<b<<" ";
while (i<n){
       sum=a+b;
      
    //  cout<<sum<<" ";
     a=b;
     b=sum;
     i++;
}
cout<<sum; // only if we have to print the digits at nth position 
    return 0;   
 }
 