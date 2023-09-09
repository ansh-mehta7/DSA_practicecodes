
#include <iostream>
#include<cmath>
using namespace std;
bool checkPrime(int n)
{
  for (int i=2;i<=sqrt(n);i++){
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

  for (int j=2;j<=num;j++){
    
    if (checkPrime(j)){
      cout<<j<<" ";
    }
  }
    return 0;
}