#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person{
    public :
    void walk(){
        cout<<"walking"<<endl;
    }
};
class Teacher :virtual public Person{
    public:
    void teach(){
        cout<<"teaching"<<endl;

    }

};
 class Reasercher :virtual public Person {
 public :
 void reasearch (){
    cout<<" researching"<<endl;

 }
 };

 class professor : public Teacher,public Reasercher{
 public :
 void bore (){
    cout<<" boring "<<endl;
 }
 };
int main () {
    professor p;
    // sol 1 
    //  p.Teacher::walk();
     // sol  2 using virtual 
     // same copy of walk 
     // virually matlab abhi inherit mat karo runtime pr kar lena 
     
   p.walk();

return 0;
  }
  // jab virtual nahi lgate h jab twalk and rwalk alag alaag ban jatae h 
//   to compile time pe ye compiler samajh nhi paata hai 

// virtual bolta h ki copy bna mat 
// runtime pe wlak ko resolve kr lio 
// to walk ki same copy share hogi person ki dono class ko researcher ko bhi and teacheer ko bhi 

// ambihuipty is resolved this way 
// C++ addresses the Diamond Problem using virtual inheritance. Virtual inheritance ensures that there is only one instance of the common base class, eliminating the ambiguity.

// The Diamond Problem is a specific issue that arises in multiple inheritance when a derived class inherits from two or more base classes that share a common ancestor. It leads to ambiguity in the inheritance hierarchy and can result in unexpected behaviour during method resolution and member access.