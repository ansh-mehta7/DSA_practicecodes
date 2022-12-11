/*

#include <iostream>

using namespace std;

int main()
{
   int n ;
    cin >>n ;
    int i =1 ;
    
    while (i<=n){
         int k= 1 ;
          while (j<=i){
               cout<<"*";
                j++;
          }
       
          
          i++;
    cout<<endl;
     
    }
    int k=1;
   

    while (j<=n-1)
    {
         int star=n-j;
         while (star){
             cout<<"*";
             star--;
             
         }
         j++;
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

#include <iostream>

using namespace std;
int main(){
    int n ;
     cin >>n;
      int i = 1;
       while (i<=n){
         int space = n-i;
          while (space ){
             cout<<" ";
             space --;

          }
int j= 1;
 while (j<=i){
    cout<<"*";
    cout<<" ";
    j++;

 }
i++;
cout<<endl;


       }
       int k= 1;
        while (k<=n-1)
{
    int space =k;
    while (space ){
         cout<<" ";
         space --;

    }
    int starr=n-k;
    while (starr){
cout<<"*";
cout<<" ";
starr--;
    }
    k++;
    cout<<endl;
    
}       
       return 2 ;
       

}

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/