// share the information of a class which was hidden previously 
// private mebers are only modified through the getter and setter similary the protrcte members as well 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class A{
  private:
  int x;
  public:
  A(int _val):x(_val){};

  void setter(int _val){x=_val;}
  int getter() const {
    return x;
  }
  friend class B;
  friend void printa(const A &a);
};
 class B{
  public:
  void print(const A&a){
    // cout<<a.getter()<<endl;
    cout<<a.x;
  }
 };

 void printa(const A&a){
  cout<<a.x<<endl;
 }
int main () {
   A a(5);
   B b;
   b.print(a); 
   printa(a);
return 0;
  }

//   Friend Function : Friend function acts as a friend of the class. It can access
// the private and protected members of the class. The friend function is not
// member of the class, but it must be listed in the class definition. The
// non-member function cannot access the private data of the class.
// Sometimes, it is necessary for the non-member function to access the data.
// The friend function is a non-member function and has the ability to
// access the private data of the class.
// Note :
// 1. A friend function cannot access the private members directly, it has
// to use an object name and dot operator with each member name.
// 2. Friend function uses objects as arguments.