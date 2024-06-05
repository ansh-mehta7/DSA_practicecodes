#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printSybarrays(int arr[],int start,int end,int n){
   // base case
    if (end==n) return;
    // 1 case 
    for (int i=start;i<=end;i++){
      cout<<arr[i];
    }
    cout<<endl;
       
       printSybarrays(arr,start,end+1,n);

}
void outerLopp(int arr[],int start,int end,int n){
  for (start=0;start<n;start++){
     printSybarrays(arr,start,start,n);
  }
}
int main () {
    int arr[]={1,2,3,4,5};
    int n=5;
    outerLopp(arr,0,0,n);
return 0;
  }