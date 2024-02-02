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