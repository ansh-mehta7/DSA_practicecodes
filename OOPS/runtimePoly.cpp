#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Animal {
public :
 virtual void sound(){
    cout<<"animal making sound"<<endl;
} 
 virtual ~Animal(){
    cout<<"animal dtor called "<<endl;
}
};


class Dog :public Animal {
public :
void sound() override
{
    cout<<"dog barking sound"<<endl;
}
~Dog(){
    cout<<"dog dtor called "<<endl;
}
};


class Cat :public Animal {
public :
void sound() override 
{
    cout<<"cat mewing sound"<<endl;
}
~Cat(){
    cout<<"cat dtor called "<<endl;
}
};


class Parrot :public Animal {
public :
void sound() override 
{
    cout<<"parrot mithu sound"<<endl;
}
};


void sound (Animal *animal){

    animal->sound();
    // polymorphic aniamal-<sound is behaving as per
    // required object allocated at runtime 
}
int main () {
    // Dog *dog =new Dog();
    // dog->sound();
    Animal *animal =new Dog(); //called upcasting
    sound(animal);

    // animal =new Cat();
    // sound(animal);

    // animal =new Parrot();
    // sound(animal);
    delete animal;

return 0;
  }