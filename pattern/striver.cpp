#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// *****
// *****
// *****
// *****
// *****
void print2(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// *
// **
// ***
// ****
// *****
void print3(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
// 1
// 12
// 123
// 1234
// 12345
void print4(int n){
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=n-i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
// *******
// ******
// *****
// ****
// ***
// **
// *
void print5(int n){
    for(int i=0;i<n;i++){
        // space loop
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // star loop
        for (int j=1;j<=2*i+1;j++){
            cout<<"*";
        }
         for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//     *
//    ***
//   *****
//  *******
// *********
void print6(int n){
    // space 
   
    for (int i=n-1;i>=0;i--){

        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for (int j=1;j<=2*i+1;j++){
            cout<<"*";
        }
         for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=1;i<=2*n-1;i++){
        if(i<n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else {
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        int space=2*n-2*i ;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
// 1        1
// 12      12
// 123    123
// 1234  1234
// 1234512345
void printbutterfly(int n){
    for(int i=1;i<=2*n-1;i++){
        if(i<n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else {
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        // space 
        int space=2*n-2*i;
        for(int j=1;j<=abs(space);j++){
            cout<<" ";
        }
        // second pattern 
        if(i<n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else {
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
void print11(int n){
    for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+(n-1)-i;ch++){
        cout<<ch;
    }
    cout<<endl;
}
}
// ABCDE
// ABCD
// ABC
// AB
// A

void print12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j<=i){
              cout<<j;
            }
            else {
               cout<<2*i-j;
            }
        }
        cout<<endl;
    }
}
//     1
//    121
//   12321
//  1234321
// 123454321

void print13(int n){
    for (int i=0;i<n;i++){
            int space =n-i-1;
            for(int j=0;j<space;j++){
                cout<<" ";
            }
            char ch='A';
            int bp=(2*i+1)/2;
        for (int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=bp){
                
                ch++;
            }
            else {
             ch--;
               
            }
            
            // characters 
            

        }
        cout<<endl;
    }
}
void printpattern (int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if((i==1 || i==n-2) && (j>1 && j<n-2) ){
               cout<<" ";
            }
            else if((i>1 && i<n-2) && (j==1 || j==n-2)){
               cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main () {
    int n;
    cin>>n;
    
    printpattern(n);
return 0;
  }