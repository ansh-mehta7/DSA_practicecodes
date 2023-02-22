#include<iostream>
using namespace std ;
int reamaining;
 int main(){
   int rs;
    cin>>rs;
 
   switch (10){
     case 10 :{
       int hundrednotes=rs/100;
       cout<<"the no of 100 notes is "<<hundrednotes<<endl;
         reamaining=rs-(100*hundrednotes);
       
        
     }
     case 1:
       {
         int fiftynotes=reamaining/50;
         cout<<"the no of 50 notes is "<<fiftynotes<<endl;
          reamaining=reamaining-(50*fiftynotes);
         
       }
     case 2:
       {
         int twentynotes=reamaining/20;
         cout<<"the no of 20 notes is "<<twentynotes<<endl;
          reamaining=reamaining-(20*twentynotes);
         
       }
     case 3:
       {
         int onenotes=reamaining/1;
         cout<<"the no of 10notes is "<<onenotes<<endl;
          reamaining=reamaining-(1*onenotes);
         
       }
   }
   return 0 ;
 }
 
 #include <iostream>
 using namespace std ;
  int powerofvariable( int a , int b ){
    int ans=1;
      for(int i=1;i<=b ;i++){
         ans=ans*a;
      }
     return ans; 
  }
 int main (){
   int x;int y ;
   cin>>x>>y;
   cout<<" the  "<<y<<" power of "<<x<<" is "<<powerofvariable(x,y)<<endl;
   return 0 ;

 }
 #include <iostream>
 using namespace std ;
 int factorial (int n){
   if (n<=1){
    return 1;
   }
   else {
    return (n*factorial(n-1));

   }
 }
  int nCr(int n ,int  r){
       int ans =factorial(n)/(factorial(r)*factorial(n-r));
       cout<<endl<<ans;

  }
  int main (){
     int a ,b ;
      cin>>a>>b;
       nCr(a,b);
       return 0;
  }
