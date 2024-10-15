#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class abc {

    int x;
     int *y;
    const int z;

     public:
     abc(){
        x=0;
        y= new int (0);

     }
    //  old style 
    //  abc (int _x,int _y,int _z =0){
    //     x=_x;
    //     y= new int(_y);
    //    z=_z;

    //  }
    // initilaisation list 
 abc (int _x,int _y,int _z =0):x(_x),y(new int (_y)),z(_z) {}

     int getX() const
     {  // agar hum chahte h ki hamara memebr variabe kabhi bhi chnage na ho to hum is function ko const bna deneg

        return x;

     }
     void setX(int val) // const // we dont want to make setx as const function because we wnt to change it time and time again 
     {
       
        x=val;
        
     }
     int getZ() const
     {  

        return z;

     }
     void setZ(int val) // const // we dont want to make setx as const function because we wnt to change it time and time again 
     {
       
        // z=val;
        
     }
     int getY() const {
        // int f=20;
        // y=&f;  now y cant be reassigned 
        return *y;

     }
     void setY(int val){
        *y=val;

     }
};

void printabc (const abc &a)
 // a is not  modofiable 
// a object itself is ocnst means a cant call any fuction 
// which is not const

// humko guarnatee dena padegiki agar hum const object bna re h to vo unhi methods ko call kr paegi jo guarmetee deri h ki vo modify nhi kregi data ko means ke the function should als be const 


{
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    cout<<a.getZ()<<endl;

}
int main (){

  abc a;
  abc a2(1,2,3);
  printabc(a2);
//   cout<<a.getX()<<endl;
//   cout<<a.getY()<<endl;

   

    return 0 ;
}