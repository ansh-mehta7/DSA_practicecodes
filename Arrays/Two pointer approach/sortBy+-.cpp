#include <iostream>
using namespace std;
void sort(int arr[], int n ){
    
    int j=0;
    for (int i=0;i<n;i++){
        if (arr[i]<0){
           swap (arr[i],arr[j]);
             j++;
        }
    }
}

void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
int main () {
    int arr[]={-23,-7,-89,-10,-11,-40,0};
    int n=7;
    sort (arr,7);
    printArray(arr,7);
return 0;
  }