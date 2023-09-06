#include <iostream>
using namespace std;

void printMaximum(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is larger" << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is larger" << endl;
    } else {
        cout << num3 << " is larger" << endl;
    }
}

 void printMAx(int n1 ,int n2 ,int n3){
   int ans1=max(n1,n2);
    
  int ans2= max (ans1,n3);
cout<<ans2;
 }
int main () {
    printMAx(10,20,30);
printMaximum(11,-33,3);
return 0;
  }