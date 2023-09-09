#include <iostream>
using namespace std;
void extreme(int arr[],int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        if (s==e){
            cout<<arr[s];
            break;
        }
        cout<<arr[s++]<<" ";
        cout<<arr[e--]<<" ";
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
    extreme(sample,9);
    
return 0;
  }