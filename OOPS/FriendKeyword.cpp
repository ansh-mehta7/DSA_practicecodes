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