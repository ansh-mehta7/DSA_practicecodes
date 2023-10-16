#include <iostream>
#include <vector>
using namespace std;
bool checkSorted(int arr[], int size , int index ){
  // bc 
  if (index>=size){
    return true;
  }
  // process 
  if (arr[index]>arr[index-1]){
    // check aage
     bool aage= checkSorted(arr,size,index+1);
     return aage;
  }
  else {
    return false ;
  }
}
int main () {
    int arr[]={60};
    int size =1;
    int index =1;
    bool isSorted =checkSorted (arr,size,index);
    if (isSorted){
      cout<<" array is sorted"<<endl;
    }
    else {
      cout<<" array is not sorted "<<endl;
    }
return 0;
  }