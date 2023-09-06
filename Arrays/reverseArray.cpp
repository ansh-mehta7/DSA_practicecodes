#include <iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        arr[s++]=arr[e--];
        // swap(arr[s++],arr[e--]);
        
    }
}

void inputArray(int arr[],int n){
for (int i=0;i<n;i++){
    cin>>arr[i];
}
}

void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main () {
   
    int sample[9];
    inputArray(sample,9);
    printArray(sample,9);
    reverseArray(sample,9);
    printArray(sample,9);
return 0;
  }