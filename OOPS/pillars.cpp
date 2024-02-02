#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Bird {
    public:
    int age ;
    int weight;
    int nol;
    string color;
    void eat (){
        cout<<"eating "<<endl;
    }
    void fly (){
        cout<<" the bird is flying "<<endl;

    }

};
// class Sparrow :public Bird{
class Sparrow :private Bird{
    public :
     Sparrow(int age ,int weight, int nol,string color ){

        this->age=age;
        this->weight=weight;
        this->nol=nol;
        this->color=color;
     }
    void grassing(){
        cout<<" sparrow grassing "<<endl;

    }

};
class Peigon :public Bird{

    public:
    void guttering (){
        cout<<" peigon guttering "<<endl;
    }
};

int main () {
    Sparrow s(1 ,2,4,"brown");
    s.age;
    s.eat();
    s.grassing();
    // s.age;
    // s.eat();
    // s.grassing();  in private mode it cant be inherited 

    Peigon p;
    p.eat();
    
return 0;
  }