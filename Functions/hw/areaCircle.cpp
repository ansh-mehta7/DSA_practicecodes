#include <iostream>
#include<cmath>
using namespace std;
float areaOfCircle(int r ){

float area=3.14*(pow(r,2));
return area;

}
int main () {
    int r;
    cin>>r;
    cout<<areaOfCircle(r);
    
return 0;
  }