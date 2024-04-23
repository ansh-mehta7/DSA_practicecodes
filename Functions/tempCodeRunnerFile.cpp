#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void  fibonnaci (int n){
  
  int first =0;
  int second=1;
  cout<<first<<" "<<second<<" ";
  for (int i=2;i<=n;i++){
     int sum=first+ second;
     first=second;
     second=sum;
     cout<<sum<<" ";

  }
}
int main () {
  fibonnaci(8);
return 0;
  }