#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

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
