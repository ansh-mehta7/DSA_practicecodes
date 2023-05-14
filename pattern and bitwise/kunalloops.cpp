  
// find the largest of the three numbers 
#include<iostream>
using namespace std ;

 int main (){
     int n1,n2,n3;
      cin>>n1>>n2>>n3;
      int max =n1;
    
    if (n2>max ){

        
        max =n2;

    }
      if (n3>max ){
         max =n3;
    }
    cout<<" max is "<<max ;
return 0; 
 }

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
 
  // reverse the entered  digit 
  #include <iostream>

   using namespace std ;
    int main (){
       int n ;
       cout<<"enter the number \n ";
        cin >>n;
        int ans =0;
         while (n!=0)
         {
          int digit=n%10;
        ans =(ans *10)+digit;
        n=n/10;

         }
         cout<<ans;
         return 2;
    }

#include <iostream>

   using namespace std ;
    int main (){
       int n ;
       cout<<"enter the number \n ";
        cin >>n;
        int ans =0;
        int sum =0, product =1;
         while (n!=0)
         {
          int digit=n%10;
        sum = sum + digit;
        product= product* digit;

        n=n/10;

         }

         cout<<sum<<endl<<product;
         return 2;
    }

  
    