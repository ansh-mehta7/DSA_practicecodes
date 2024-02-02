#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class abc {
    public :
    static int x,y,count;
    // static variables are not related to any instance
    // of a class 
  static void  print (){
    // this pointer is related with a particular
    // instance 
      cout<<x<<" "<<y<<endl;
      cout<<"count called "<<count++<<endl;
      
    }

};

// they have to be declared outside the class 
int abc::x;
int abc::y; 
int abc::count=0; 

int main () {
    abc obj1;
    // abc::x=1;
    //  abc::y=2;
  abc::print();
    abc obj2;
     abc::print();
    abc obj3;

  
     
 // here also 3 4 will be printed
    abc::print(); 

return 0;
  }