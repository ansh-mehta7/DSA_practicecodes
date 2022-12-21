#include <iostream>
 using namespace std ;
 /*
 int main (){
      int n ;
       cin >>n;
        for( int i =1 ;i<=n; i++){
          int col=1 ;                         
           for (col; col<=i; col++){
             cout<<"*";

           }
           cout<<"\n";

        }
        return 0;
  }
  */
  int main (){
      int n ;
       cin >>n;
        for( int i =1 ;i<=2*n-1; i++){
int spacetimes =i<=n?n-i:i-n;
for(int z=1;z<=spacetimes;z++){cout<<" ";}
                     
          int condition=i<=n?i :2*n-i;
           for ( int col=1;col<=condition ; col++){
             cout<<"*"<<" ";

           }
           cout<<"\n";

        }
        return 0;
  }
  /*   
  */
 #include <iostream>
 using namespace std ;
 int main (){
      int n ;
       cin >>n;
        for( int i =1 ;i<=2*n-1; i++){
          int condition=i<=n?i :2*n-i;
int spacetimes =n- condition;
for(int z=1;z<=spacetimes;z++){cout<<" ";}
                     
           for ( int col=1;col<=condition ; col++){
             cout<<"*"<<" ";

           }
           cout<<"\n";

        }
        return 0;
  }


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
   #include <iostream>
 using namespace std ;
 int main (){
      int n ;
       cin >>n;
        for( int i =1 ;i<=2*n-1; i++){
          int condition=i<=n?n-i :i-n;

for(int z=1;z<=condition;z++){cout<<" ";}
                     
           for ( int col=1;col<=condition ; col++){
             cout<<"*"<<" ";

           }
           cout<<"\n";

        }
        return 0;
  }
