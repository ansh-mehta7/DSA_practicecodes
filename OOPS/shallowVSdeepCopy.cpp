#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class abc {
    public :
    int x;
     int *y;

     abc (int _x,int _y) :x(_x) ,y(new int (_y)) {}

    // default copy constuctor dumb: 
    // it does shallow copy 
     
   //   abc (const abc &obj){
   //      x=obj.x;
   //      y=obj.y; 
   //   }

    // smart copy 
     abc (const abc &obj){
        x=obj.x; 
        y=new int (*obj.y);
        // a ke y ki value nikali usko kisi nai location pe 
        // point kraya aur y me vo daal diya 

        // this is deep copy
     }
    

    ~abc(){
      delete y;
    }
     void print (){
        cout<<"value of x "<<x<<"\npointer y "<<y<<" \ncontent of *p pointer "<<(*y)   <<endl;
        cout<<endl<<endl;
     }
};
int main (){
   abc *a=new abc(1,2);
   abc b=*a;
   delete a;
   b.print();
   return 0;
}
int main2 () {
    abc a(1,2);
    a.print();

    abc b=a; // copy constructor is called 
    b.print(); 
// 
    *b.y=20;
    b.print();
    a.print(); // this also changes the a pointer y 
    // but after creating deep copy it does not change the 
    // content of a 
    

return 0;
  }
/*
 Copy Constructor
Geeks Obj1(Obj);
or
Geeks Obj1 = Obj;

 Default assignment operator
Geeks Obj2;
Obj2 = Obj1;
*/

/*

Depending upon the resources like dynamic memory held by the object, either we need to perform Shallow Copy or Deep Copy in order to create a replica of the object. In general, if the variables of an object have been dynamically allocated, then it is required to do a Deep Copy in order to create a copy of the object

What is Shallow Copy?
In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory but if some variables are dynamically allocated memory from heap section, then the copied object variable will also reference the same memory location.

This will create ambiguity and run-time errors, dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy. 

What is Deep Copy?
In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.

Consider the previous example again. If we deep copy the object, then each object will have their own copy of the data pointed by the breadth pointer.


When we create a copy of object by copying data of all member variables as it is, then it is called shallow copy 
               	When we create an object by copying data of another object along with the values of memory resources that reside outside the object, then it is called a deep copy

                  */