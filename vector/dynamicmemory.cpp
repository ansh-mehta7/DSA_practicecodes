#include <iostream>
using namespace std;
void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

} 
int main () {
    int n;
     cin>>n;
     int *arr=new int [n];
  printArray(arr,n);
return 0;
  }