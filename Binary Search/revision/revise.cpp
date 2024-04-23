#include <bits/stdc++.h>
using namespace std;
// int binarySearch(vector<int>&arr,int target)
// {
//    int s=0;
//    int e=arr.size()-1;
//    while(s<=e){
//    int mid=s+(e-s)/2;
//      if (arr[mid]==target) return mid;
//      if (arr[mid]>target) e=mid-1;
//      if (arr[mid]<target) s=mid+1;
//      mid=s+(e-s)/2;

//  }
// return -1; // if not found 
// }

int oddOccuringIndex(vector<int>&nums){
   int s=0;
   int e=nums.size()-1;
   int mid =s=(e-s)/2;

}
int main (){
    
    vector<int>nums={1,1,2,2,3,3,2,3,3};
    // int target=67;
    int ans=oddOccuringIndex(nums);
    cout<<ans<<endl;
    return ans;


}
