#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
void evenByrecursion (int arr[],int size ,int index,vector<int> &ans){
    // bc 
    if (index>=size) return ;

    // processing 
    if (arr[index]%2==0){
        ans.push_back(arr[index]);
        // push 
    }
    // recursive call 
    evenByrecursion(arr,size,index+1,ans);
}
void doubleArray (int arr[],int size ,int index){
    //bc 
    if (index>=size) return;

    // processing
    arr[index]*=2;

    // rec call 
    doubleArray (arr,size,index+1);

}
int maxInArray (int arr[],int index,int size ,int &maxi){
    //bc 
    if (index>=size) return -1 ;
     // processing 
    maxi=max(maxi,arr[index]);
    //rec call
    maxInArray(arr,index+1,size,maxi);

    return maxi;
}

int main () {
    int arr[]={10,20,20,40,50,60};
    int maxi=INT_MIN;
    vector<int>ans;
    evenByrecursion(arr,6,0,ans);
    for(auto i:ans)
{
    cout<<i<<" ";
}   
cout<<endl; 
   doubleArray(arr,6,0);
      for(auto i:arr)
{
    cout<<i<<" ";
} 
cout<<endl; 
cout<<maxInArray(arr,0,6,maxi);
return 0;
  }