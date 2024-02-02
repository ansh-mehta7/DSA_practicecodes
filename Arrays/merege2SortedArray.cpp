#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void merge (int arr1[],int size1,int arr2[], int size2 ,int arr3[]){
int k=0;
int i=0;
int j=0;
   while (i<size1 && j<size2) {
    if (arr1[i]>arr2[j]){
      arr3[k]=arr2[j];
      j++;
      k++;
    }
    else {
       arr3[k]=arr1[i];
       i++;
       k++;
    }

}
   while (i<size1){
    arr3[k]=arr1[i];
    i++;
    k++;
    }
    while (j<size2){
    arr3[k]=arr1[j];
    j++;
    k++;
    }
}
int main () {
    int arr1[]={2,4,8,11,14};
    int arr2[]={1,3,9};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);

    for (int i: arr3){
        cout<<i<< " ";
    }
    

return 0;
  }