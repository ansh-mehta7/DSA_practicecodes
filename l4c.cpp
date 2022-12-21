#include <iostream>

using namespace std;

int main()
{
    /*int n;
     cin >>n ;
     int i = 1 ;

      while (i<=n){
        char c ='A';
        int j = 1;

         while (j<=n)
         {
             cout<<c;
             cout<<" ";

             c++;
             j++;

         }

         cout<<endl;

          i++;


}return 0;


A B C
A B C
A B C */

    // int n;
    //      cin >>n ;
    //      int i = 1 ;

    //       while (i<=n){

    //         int j = 1;

    //          while (j<=n)
    //          {
    //             char c ='A'+j-1;
    //              cout<<c;
    //              cout<<" ";

    //              c++;
    //              j++;

    //          }

    //          cout<<endl;

    //           i++;

    // }
    // return 0;
    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E
    // A B C D E

    // A B C
    // D E F
    // G H I

    // int n  ;
    //  cin >>n ;
    //   int i = 1 ;

    //   while (i<=n){
    //     char c ='A'+i-1;
    //      int j = 1 ;

    //      while(j<=n){
    // cout<<c;
    // j++;

    //      }
    //       cout<<endl;
    //     //   c++;

    //       i++;

    //   }
    // AAA
    // BBB
    // CCC
    // int n ;
    //     cin>>n ;
    //       int i =1 ;
    //     //  int count = 1;
    //     char counter ='A';

    //        while (i<=n){
    //         int j = 1;

    //              while (j<=i ){
    //                cout<<counter;
    //                counter++;
    //                j++;

    //            }
    //           cout<<endl;
    //             i++;
    // ABCD
    // EFGH
    // IJKL
    // MNOP

    //        }

      int n;
    cin >>n ;
    int i = 1 ;

       while (i<=n)
       {
         int j = 1;
           char  starting ='A'+n-i; // ye bhi to kr sakte h  rhs ko hi hamesha kyo update re
      while (j<=i)
          {

          cout<<starting;
             cout<<" ";
          starting= starting+1;
            j++;
       }       cout<<endl;   
            i++;
       }
    //        D
    // C D
    // B C D
    // A B C D
    //    return 0 ;

    // A B C
    // B C D
    //  C D E

    //     int n;
    //  cin >>n ;
    //  int i = 1 ;

    //   while (i<=n){
    //     char c ='A'+i-1;
    //     int j = 1;

    //      while (j<=i)
    //      {
    //          cout<<c;
    //          j++;
    //      }

    //      cout<<endl;
    //       i++;

    //   }
    //   A
    //   BB
    //   CCC

    // int n;
    // cin >> n;
    // int i = 1;

    // for (i = 1; i <= n; i++)
    // {
    //     int j =1 ;
    //      for(j=1 ; j<=i;j++){
    //         char start='A'+i+j-2;
    //          cout<<start;
    //      }
    //      cout<<endl;



    return 0;
}