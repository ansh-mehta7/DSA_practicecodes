#include <iostream >
 using namespace std ;
  int main ()
     // no of lines = no of rows = no of outer loop will run 
     // identify how many cols are there for row number and the types of coloumns 
 
 // what do u need to print 
/*
int n ;
 cin >>n ;
  for (int i =1;i<=2*n-1;i++){
     for (int j=1; i<=n?j<=i : j<=2*n-i; j++){
         cout<<"*";

     }
     cout<<endl;

  }
return 0;
  }

*
**
***
****
*****
****
***
**
*

*/
 /*  
 {
  int n ;
   cin >>n ;
    for(int i =1 ; i<=2*n-1; i++){
      int j= i<=n ?i : 2*n -i;
int space =n-j;
      for( int s=1; s<=space ; s++){
        cout<<" ";

      } 
      for( int col =1; col<=j; col++){
         cout<<"*";
         cout<<" ";

      }
cout<<endl;

    }
    return 1 ;
}

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
 
 */
{int n ;
 cin >> n;
  for (int i = 1 ;i<=n ;i++)
{
   int space = n-i;
   for (int j=1; j<=space ;j++){
     cout<<" ";
   }
   int col = 2*i-1;
   for(int k=1; k<=col ;k++){
    for (int s=1 ;s<=i ? cout<<i)
   }
} 
}