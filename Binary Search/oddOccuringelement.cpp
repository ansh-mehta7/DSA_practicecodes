#include <iostream>
using namespace std;
int oddOccuringindex(int arr[], int n ){
 int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while (s<=e){
    if (s==e){
        return s;
    }
     else if (mid&1==1) // odd index
    {
     if (arr[mid]==arr[mid-1] && mid-1>=0)
     { 
        s=mid+1;

     }
     else {
        e=mid-1;
     }
    }
    else if (mid&1 ==0){
    if (arr[mid]==arr[mid+1]){
        s=mid+2;
    }
    else {
        e=mid;
    }
    }
    mid=s+(e-s)/2;

}
return -1;
}
int main () {
    int arr[]={10,10,2,2,5,5,2,2,5,5,20,20,11,10,10};
    int n=15;
    int ans=oddOccuringindex(arr,n);
    cout<<"final ans is "<<arr[ans];

return 0;
  }