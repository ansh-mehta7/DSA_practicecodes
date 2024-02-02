#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class VectorAdd {
  int x;
   int y ;
 public :
 VectorAdd (int x=0,int y=0){
    this->x=x;
    this->y=y;

 }
 void display(){
    cout<<x<<" "<<y<<endl;
 }
 VectorAdd operator+( VectorAdd &src){
  VectorAdd v3;
   v3.x=x+src.x;
  v3.y=y+src.y;
  return v3;

 }
 void operator++(){
   this->x=this->x+1;
   this->y=this->y+1;
 }
};

int main () {
    VectorAdd v1(1,2);
    VectorAdd v2(3,4);
    VectorAdd v3=v1+v2;

    // v1+v2;
   
    v3.display();
    ++v1;
    v1.display();
    


return 0;
  }