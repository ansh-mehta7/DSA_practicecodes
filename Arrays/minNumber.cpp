#include <iostream>
#include<limits.h>  
using namespace std;
int minimumNumber(int arr[],int n){
   int min=INT_MAX;
   for (int i=0;i<n;i++){
    if (arr[i]<min){
        min=arr[i];
    }
   }
return min;
}
int main () {
    int arr[7];
    for (int i=0;i<7;i++){
       cin>>arr[i];
    }
  cout<<  minimumNumber(arr,7);
return 0;
  }