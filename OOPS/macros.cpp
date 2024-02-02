// preprocessor derivatives that allow you to define conatanst ,
//functions or code snippets that can be used throuhout your code 

 //used for definning constants or shorthand 
 #include <iostream>
 #include <algorithm>
 #include <vector>
 using namespace std;

 # define PI 3.1415678
 # define MAXX(x,y) (x>y?x:y)
 // pre processing all the macros are replaced  by whereever they are called before the code 
 // is compiled  

 float circleArea (float r){
    return PI * r * r;
 }

 float circlePerimeter (float r){
    return 2* PI * r;
 }

 int func(){
    int a=10;
    int b=20;
    int c= MAXX(a,b);
  

    return c;
 }
 int main () {
    cout<<circleArea(12.78)<<endl;
    cout<<func()<<endl;
 return 0;
   }
