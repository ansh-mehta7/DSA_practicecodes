#include <iostream>
#include <vector>
int bsr(int arr[],int s, int e ,int k){
    // bc
    if (s>e) return -1;

// processing 
int mid=s+(e-s)/2;
if (arr[mid]==k) 
{   
  return mid;
}

if (arr[mid]<k){
 return bsr(arr,mid+1,e,k); 
}
  
if (arr[mid]>k)  {
  return  bsr (arr,s,mid-1,k);
}

} 

using namespace std;
int main () {
     int arr[]={1,2,3,4,5};
    int size=5;
  int s=0;
  int e=size-1;

    int k=4;
    cout<<bsr(arr,s,e,k);
return 0;
  }