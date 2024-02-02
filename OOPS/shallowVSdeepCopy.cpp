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