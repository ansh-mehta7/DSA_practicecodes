#include <iostream>
using namespace std ;
 /*int main (){
         int n ;
          cin >>n;
           int i=1;
        //   int j =1 ; // j ka scope loop ke andar bhi to hina jaruri hai 
             while (i<=n ){
                  int j =1 ;
               while (j<=n)
               {
                cout<<"*";
                j++;


               }
               cout<<endl;

                 i++;
                
                  
             }
              return 1 ;
 }
*/
/*int main ()
{
int n ;
 cin>>n;
 int i =1;
 while(i<=n){
        int j =1;

        while(j<=n){
                cout<<i;
                j++;

        }
cout<<endl;
 i++;

 }
  return 0;
   
}*/
int main (){
         int n ;
          cin >>n ;
           int i =1 ;
            while (i<=n ){

                 int j =1;

                //  while (j<=n){
                       
                //          cout<<j;
                //           j++;
                 while (j<=n){
                       
                         cout<<n-j+1;
                          j++;

                 }
                 cout<<endl;
                  i++;

            }
            return 1 ;
             
}