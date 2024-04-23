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
int secondMin(int arr[], int n ){
   int firstmin=minimumNumber(arr,n);
   
      int secondmin=INT_MAX;
   for (int i=0;i<n;i++){
      if (arr[i]>=firstmin && (arr[i]<=secondmin)){
            secondmin=arr[i];
      }
   }
   return secondmin;
}
int main () {
    int arr[3]={81,90,81};
   //  for (int i=0;i<7;i++){
   //     cin>>arr[i];
   //  }
  cout<<  minimumNumber(arr,3)<<endl;
  cout<<  secondMin(arr,3);

return 0;
  }