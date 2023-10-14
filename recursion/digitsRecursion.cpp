#include <iostream>
#include<vector>
using namespace std;
 void printdigitByRecursion(int n,vector <int> &ans){
    // bc 
    if (n==0) return ;
     // processing
      int digit =n%10;
   ans.push_back(digit);
      n=n/10 ;

     // rec call  
     printdigitByRecursion(n,ans);

}
 void printNumByRec(int n, int &ans,vector <int >&nums){
  // bc 
 if (n==0) return;

  // processing
  int digit;
  cin>>digit;
  ans=ans*10+digit;

  // rec call 
  printNumByRec(n-1,ans,nums);
  nums.push_back(ans);


}
int main () {
    int n=3;
    int ans=0;
    vector <int >nums;
   printNumByRec(n,ans,nums);

  
    //  printdigitByRecursion(n,ans);
  cout<<nums[0];
      
return 0;
  }
