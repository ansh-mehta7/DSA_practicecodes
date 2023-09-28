#include <iostream>
using namespace std;
int findPivotIndex (int arr[], int n){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e){
        //  corner case   
        if (s==e){
          return s;
        }
        else if (mid+1<n && arr[mid]>arr[mid+1]) return mid;
        else if (mid-1>=0 && arr[mid]<arr[mid-1]) return mid-1;
        else if (arr[s]>arr[mid]) e= mid-1;
        else s=mid+1;

     mid=s+(e-s)/2;
    }
    return -1;
}
int main () {
     int arr[]={1,3};
     cout<<findPivotIndex(arr,2);
return 0;
  }