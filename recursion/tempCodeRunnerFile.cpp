
#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
void formNumber(vector<int>&nums,int index,int &ans){
   // base case 
   if (index>=nums.size()){
    return;
   }

   int digit=nums[index];
   ans=(ans*10)+digit;

   formNumber(nums,index+1,ans);

}
int main () {
     
     vector<int>nums={4,1,7};
     int ans=0;
     formNumber(nums,0,ans);
     cout<<ans;



    // int n=4217;
    // vector<int>ans;
    // printdigit(n);
    // for (auto i:ans){
    //     cout<<i<<endl;
    // }


    // int arr[]={1,2,3,4,5};
    // int size=5;
    // int index=0;
    // int mini=INT_MAX;
    // printArray(arr,size,index);
    // cout<<endl<<searchArray(arr,5,0,4)<<endl;
    // minimum(arr,5,0,mini);
    // cout<<"the min element is "<<mini;
return 0;
  }
