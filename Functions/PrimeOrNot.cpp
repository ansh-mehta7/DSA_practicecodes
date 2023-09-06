
#include <iostream>
using namespace std;
bool checkPrime(int n)
{
  for (int i=2;i<=n-1;i++){
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