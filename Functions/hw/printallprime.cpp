#include <iostream>
using namespace std;
void printAllPrime(int n){
   for (int i=2;i<=n-1;i++){
    if (n%i!=0){
        cout<<i<<endl;
    }
    else continue;
   }
}
int main () {
    int num;
    cin>>num;
    printAllPrime(num);
return 0;
  }