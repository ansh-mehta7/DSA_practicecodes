#include <iostream>
using namespace std;
void checkevenodd(int n){

    if (n&1){
    cout<<"odd number ";
    }
    else cout<<"even number ";

}
bool checkeven(int n){

    if (n&1){
        return false;
    }
    else {
        return true;
    }

}
int main () {
    int n;
     cin >>n;
     bool result= checkeven(n);
     if (result){
        cout<<" even";
     }
     else {
        cout<<"odd";
     }
    //  checkevenodd(n);

return 0;
  }