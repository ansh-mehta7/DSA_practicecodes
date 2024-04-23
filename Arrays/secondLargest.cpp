#include <iostream>
#include <algorithm>
#include <vector>
#include<limits.h>
using namespace std;
int secondLargest(int arr[],int n){
    
    int max=INT_MIN;
    int secondMax=-1;
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            secondMax=max;
            max=arr[i];
        }
        else if (arr[i]<max && arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
return secondMax;
}
int main () {
    int arr[6]={1,4,7,9,5,6};
    int size =6;
    cout<<secondLargest(arr,size);
return 0;
  }