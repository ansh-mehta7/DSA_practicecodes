#include <iostream>
using namespace std;
void shiftByK(int arr[], int n , int k ){
// temp[k] size ka array banega 
int temp[k];


// temp me last i k values enter hogi
for (int j=0;j<k;j++) {
  for (int i=n-k;i<n;i++){
    temp[j]=arr[i];
  }
}

  
  


// fir bache hue shift karunga aur temp me dalunga 
for (int i=k;i<n;i++){
  temp[i]=arr[i-2];

}
for (int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
}


int main () {
  int arr[]={1,2,3,4,5,6,7};
  shiftByK(arr,7,3);
  // printArray(arr,7);
return 0;
  }
