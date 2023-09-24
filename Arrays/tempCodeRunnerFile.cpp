

#include <iostream>
using namespace std;
void Rotatetoleftt(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i ] = arr[i];
  }
  for (int i = 0; i < n-k; i++)
  {
    arr[i ] = arr[i+k];
  }
  for (int i = n-k; i < n; i++)
  {
    arr[i] = temp[i-(n-k)];
  }
}
void printArray(int arr[],int n){
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}
int main()
{
  int n = 8;
  int arr[] = {1, 2, 3, 4, 5,6,7,8};
  int k = 3;
  Rotatetoleftt(arr, n, k);
 printArray(arr,n);
  return 0;
}

