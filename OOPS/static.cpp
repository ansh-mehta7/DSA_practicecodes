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
// ab vo kisi aboject ka nhai balki ek class ka dara memeber hai

int abc::x;
int abc::y; 
int abc::count=0; 

int main () {
    abc obj1;
    // abc::x=1;
    //  abc::y=2;
  abc::print(); // ab ye class ka function ban chuka h directly 
    abc obj2;
     abc::print();

     
 // here also 3 4 will be printed
    abc::print(); 

return 0;
  }
  // static data memebr->this variable is going to share memeory with all the instances of the class withput having any sopeciofic memoru for any partoculkar instance of the class 

  // static memeber function 
  // ->this function can only have have the static data members
  //  it will be shared by all the whole class therefore no instance of the class being passed into that method 


// When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call. 

// As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects. There can not be multiple copies of the same static variables for different objects. Also because of this reason static variables can not be initialized using constructors. 