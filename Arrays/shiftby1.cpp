#include <iostream>
using namespace std;
void shiftBy1(int arr[], int n){
    // last vali value ha usko temp me store karna hai 
    int temp=arr[n-1];
    // loop run karna h aur i me  i-1 vali value dalna hai 
    for (int i=n-1;i>=1;i--){
     arr[i]=arr[i-1];
    }

    // 0 index pe temp dalna hai 
    arr[0]=temp;
}
void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

} 
int main () {
     int arr[]={1,2,3,4,5,6};
    shiftBy1(arr,6);
    printArray(arr,6);
return 0;
  }