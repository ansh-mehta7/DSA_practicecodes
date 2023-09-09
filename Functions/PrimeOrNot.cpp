
#include <iostream>
#include<cmath>
using namespace std;
bool checkPrime(int n)
{
  for (int i=2;i<sqrt(n);i++){
    if (n%i==0){
        return false ;
    }
  }
return true;
}


int main()
{  
int num;
cin>>num;
   bool isPrime=checkPrime(num);
   if (isPrime) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }
 
    return 0;
}