#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void merge (int arr[], int s,int e ){
int mid =s+(e-s)/2;

int lenLeft=mid-s+1;
int lenRight=e-mid;


 int *leftArray =new int[lenLeft];
 int *rightArray= new int [lenRight];

int k=s;
 for (int i=0;i<lenLeft;i++){
  leftArray[i]=arr[k];
   k++;
 }

k=mid+1;
 for (int i=0;i<lenRight;i++){
  rightArray[i]=arr[k];
   k++;
 }

// actual merge logic here 
// because the left and right array is already sorted 

int leftIndex=0;
int rightIndex=0;
int mainArrayIndex=s;
// 2 pointer approach 


while (leftIndex<lenLeft && rightIndex<lenRight){
  if (leftArray[leftIndex]<rightArray[rightIndex]){
    arr[mainArrayIndex]=leftArray[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }
  else {
    arr[mainArrayIndex]=rightArray[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  
  }
}

 // 2 MORE CASES 
  while (leftIndex<lenLeft){
    arr[mainArrayIndex]=leftArray[leftIndex];
    mainArrayIndex++;
    leftIndex++;
    
  }
  while (rightIndex<lenRight){
    arr[mainArrayIndex]=rightArray[rightIndex];
    mainArrayIndex++;
    rightIndex++;

  }
  delete leftArray;
  delete rightArray;



}
void mergeSort (int arr[],int s ,int e){
  // base case 
  if (s>e) return ;
  if (s==e) return ;
  // break 
  int mid=s+(e-s)/2;
  mergeSort(arr,s,mid);

  mergeSort(arr,mid+1,e);

  merge (arr,s,e);
}

int main () {
    int arr[]= {2,1,6,9,4,5};
    int size =6;
    int s=0;
    int e=size-1;
     mergeSort (arr,s,e);
     cout<< "after merge sort "<<endl;
     for (int i: arr){
      cout<<i<<" ";
     }

return 0;
  }