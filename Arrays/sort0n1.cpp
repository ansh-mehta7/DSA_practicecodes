#include <iostream>
using namespace std;
void sort0n1(int arr[],int n){
  // zero count 
  int zerocount=0;
  int onecount=0;

  for (int i=0;i<n;i++){
    if (arr[i]==0){
      zerocount++;

    }
  }

  // one count 
  for (int i=0;i<n;i++){
    if (arr[i]==1){
      onecount++;

    }
  }

  // zero count arr[i]=0
  int i=0;
 while (zerocount-- ){
  arr[i]=0;
  i++;
 }
  // zerocount to n arr[i]=1

  while (onecount-- && i<n){
  arr[i]=1;
  i++;
  }
}

void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
int main () {
    int arr[]={0,0,1,1,0,1,0,0,1,0};
    sort0n1(arr,10);
    printArray(arr,10);
return 0;
  }

