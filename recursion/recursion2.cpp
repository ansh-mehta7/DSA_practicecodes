#include <iostream>
#include<limits.h>
using namespace std;
int searchArray(int arr[], int size,int index,int target){
    if (index>=size){
        return -1 ; // base case 
    }
    if (arr[index]==target){
        return index;
    } // processing 
    int agekaAns=searchArray(arr,size,index+1,target); // recursive call 
    return agekaAns;
   
}
void printArray(int arr[], int size ,int index){
    if (index>=size) // base case stop here 
    {
        return;
    }
    printArray(arr,size,index+1);// increament at each step 
    cout<<arr[index]<<" ";
}
void minimum (int arr[], int size, int index,int &mini){
  // BC 
  if (index>=size) return;
  // processing
  
  mini=min(mini,arr[index]);
  // rec call
  minimum(arr,size,index+1,mini);
   
}
int main () {
    int arr[]={1,2,3,4,5};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    // printArray(arr,size,index);
    cout<<endl<<searchArray(arr,5,0,4)<<endl;
    // minimum(arr,5,0,mini);
    // cout<<"the min element is "<<mini;
return 0;
  }
