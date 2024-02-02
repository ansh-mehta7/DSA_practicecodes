#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Box {
    int width;
   Box (int _w) :width(_w) {}
    public:
    int getwidth() const {
        return width;

    }
    void setwidth(int val){
     this->width=val;
    }
    friend class BoxFactory;
};
class BoxFactory{

int count ;
public:
Box getABox(int _w){
    return Box(_w);
}

};
int main () {
    // Box b(5);
    // cout<<b.getwidth()<<endl;
    ++ count;
    BoxFactory bfact;
    Box b=bfact.getABox(5);
    cout<<b.getwidth();
return 0;
  }
  // yes constructor can be  mase private 
  //  main me directly box ka koi object nahi ban sakte 
  // but another class ke throughy usko bna sakte hai
