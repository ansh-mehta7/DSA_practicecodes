  
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
     int n =10;
  
      int a= 0;
      int b =1;

int i=2;
cout<<a<<" "<<b<<" ";
while (i<n){
      int sum=a+b;
      
     cout<<sum<<" ";
     a=b;
     b=sum;
     i++;
}
    return 0;   
 }
 // repeation of digit 
 #include <iostream> 
 using namespace std ;
  int main (){
     int n ;
     int count=0 ;
      cin>>n ;
     cout<<"enter the repeatative number";
     int i ;
     cin>>i;
       while (n!=0){
         int digit =n%10;
         if (digit == i){
         count ++;
         }
         n=n/10;
       }
       cout<<count ;
        return 8489;
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

  
    