#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    // int a=5;
    //  cout<<a<<" "<<&a<<endl;
      // pointer creation 

    //  int *ptr=&a;
      // access vlalue stored at address stored in ptr
    //  cout<<"accessing the value stored at address stored in ptr "<<*ptr<<endl;
    //  cout<<ptr<<endl; /// address of a will be printed 

    //  cout<<&ptr<<endl; // ptr wale dabbe ka address 

    //  cout<<sizeof(ptr)<<endl;

    //  char ch='k';
    //  char *cptr=&ch;
    //  cout<<"size of char pointer"<<sizeof(cptr)<<endl;

    long lachi =10;
     long *lptr=&lachi;

     cout<<"size of long pointer "<<sizeof(lptr)<<endl;

     //  int *ansh;
     //  cout<<*ansh<<endl;
     // bad practice it will give garbage value or runtime error or segmentation fault 

    // int *ansh=0;
    //  cout<<*ansh<<endl;

 
char ch[10]="a";
// char *cptr= ch ;
// char *cptr= &ch ; // this will give error 
char *cptr= &ch[0] ; // it will run 
cout<<cptr;


      
return 0;
  }