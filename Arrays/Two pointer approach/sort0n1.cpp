#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void sortTwoPointer(int arr[],int n ){
    int s=0;
    int e=n-1;
    while (s<=e){
        if (arr[s]==1 && arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }

    else if (arr[s]==0){
     s++;
    }
    else if (arr[e]==1) e--;
    }
    
    // sort (arr,arr+n);
}

void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

} 

int main () {
      int arr[]={0,0,1,1,0,1,0,0,1,0,0,1,1,0};
    sortTwoPointer(arr,14);
    printArray(arr,14);
return 0;
  }