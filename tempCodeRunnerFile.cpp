#include <iostream>
 using namespace std ;
 int main (){
      int n ;
       cin >>n;
        for( int i =1 ;i<=n; i++){
          
int spacetimes =n-i;
for(int z=1;z<=spacetimes;z++){cout<<" ";}

          
                     
           for (int j=i;j>=1;j--){
            cout<<j;

           }
           for (int j=2;j<=i;j++){
            cout<<j;

           }

           cout<<"\n";

        }
        return 0;
  }