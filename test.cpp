#include <iostream>
using namespace std ;
 
int main() {

   int n;
     cin >> n;
     int i = 1;
     for (i = 1; i <= n; i++)
     {
         int j =1 ;
         char start='A'+i+j-2;
          for(j=1 ; j<=i;j++){
             
              cout<<start;
              start++;
          }
          cout<<endl;



  
}

    return 0;
}