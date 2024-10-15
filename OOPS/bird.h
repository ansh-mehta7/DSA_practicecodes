 // oops 2 main concepyts abstraction and loose coupling 
//  abstarction is all under encapsulation inheritence polymorphism

// whats is abstract class 
// the class that contaiuns only one pure virtual function and thee classes cant be initated

// abstraction diffrentiates interface from implementation 
# define BIRD_H
#include <iostream>
#include <algorithm>
#include <vector>
// pure virtual function if we declare in any class then that class becomes the interface  
// so for outer world it will be used as an interface 
using namespace std;
class Bird{
    public:
    virtual void fly()=0;
    virtual void eat()=0;  
    // classes that inhertits this calls a=has to implememt virtual finctions 
};

class Sparrow:public Bird{
    private:
    void eat(){
     cout<<"sparrow is eating\n";
    }
    void fly(){
         cout<<"sparrow is flying\n";
    }
};

class Eagle:public Bird{
    private:
    void eat(){
     cout<<"eagle is eating\n";
    }
    void fly(){
         cout<<"eagle is flying\n";
    }
};
