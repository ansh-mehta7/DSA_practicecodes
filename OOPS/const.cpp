#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
   /*
   const with pointers 

  const int * a= new int (8);// CONST data,NON -CONST pointer
  int const * a= new int (8);// CONST data,NON -CONST pointer

* ke pehle const likhe to content will be constant  
  cout<<*a<<endl;

*a=2;  //cant change the content ( data) of pointer 
 cout<<*a<<endl; this will give error

 pointer ka content reassig nahi kar sakte pointer ko kar sakte 
 h
   
   */


/*


 pointer itself can be reassigned 
 int b=5;
 a=&b;
 cout<<*a<<endl;


*/


//  constant pointer non constant data 
/*
int *const c=new  int (2);
cout<<*c<<endl;
*c=20;  // pointer is constant but data is not constant 

cout<<*c<<endl;  // ye chal jaega  
 int d=50;
c=&d; //  nahi chalega ,CONST pointer
 

*/

// const pointer and const data 

/*
const int *const e=new int (10);
cout<<*e<<endl;
->cant be done 
*e=50;  
int f=200;
e=&f; 

*/

return 0;
  }


