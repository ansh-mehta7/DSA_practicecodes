#include <iostream>
using namespace std;
void printalldigits(int n){
    while (n>0){
        int k=n%10;
        cout<<k<<endl;
        n=n/10;

    }
}
int main () {
    int num;
     cin>>num;
     printalldigits(num);
return 0;
  }