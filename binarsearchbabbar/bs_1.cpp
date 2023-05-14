#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int binary_search(int a[], int n ,int key ){
int start=0;
int end=n-1;
int mid= start +(end-start)/2;
 // but start and end can be max_integers and the added value will be out of int range 

 while (start<=end){
    if (a[mid]==key){
        return mid ;

    }
    else if (a[mid]>key){
        end=mid-1;

    }
    else {
        start=mid+1;

    }mid= start +(end-start)/2;
    
 }
    return -1;
}
int main () {
    int even[8]={2,4,6,8,11,34,57,91};
    int odd [7]={ 11,34,37,77,79,89,92};
      cout<<binary_search(even,8,57)<<endl;
cout<<binary_search(odd,7,37);

return 0;
  }
  // 