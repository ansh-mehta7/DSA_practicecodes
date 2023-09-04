#include <iostream>
using namespace std;
int main () {
    int a=10;
    cout<<(++a)*(a++)<<"\n";
    a=10;
    cout<<(a++)*(++a);
    
return 0;
  }