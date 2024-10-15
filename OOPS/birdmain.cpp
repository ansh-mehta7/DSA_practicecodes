#include <iostream>
#include <algorithm>
#include <vector>
#include "bird.h"
using namespace std;
void birdMethods(Bird *&bird){
    bird->fly();
    bird->eat();

}
int main () {
    Bird * bird =new Sparrow();
    birdMethods(bird);
    Bird * bird2 =new Eagle();
    birdMethods(bird2);
    // interface bird class ka h to usi se hi call kar paenge 
    // interface is separe from the implemenation 
    // Bird *bird3=new Bird();
    // not possible becuase iunterfaceb ka object nhi banata kyoki uski need hi ni h abstract classs/ interface ka object nhi ban sakta

return 0;
  }
// bird interface se hi hum call kr paenge kisis child object se nhi 
// interface is same no change and implementation is changing 