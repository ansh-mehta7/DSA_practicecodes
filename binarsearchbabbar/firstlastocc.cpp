#include <iostream>
#include<vector>
using namespace std;
int firstoccurence(int arr[],int n, int key ){
int start=0;
int end=n-1;
int ans=0;

int mid = start+(end-start)/2;
while (start<=end){
    if (arr[mid]==key){
        ans=mid;
        end=mid-1;

    }
    else if (arr[mid]>key){
        end=mid-1;

    }
    else {
        start=mid+1;

    }
   mid = start+(end-start)/2;
}
return mid;
}
int rightoccurence (int arr[], int n , int key ){
    int start=0;
int end=n-1;
int ans=0;

int mid = start+(end-start)/2;
while (start<=end){
    if (arr[mid]==key){
        ans=mid;
        start=mid+1;

    }
    else if (arr[mid]>key){
        end=mid-1;

    }
    else {
        start=mid+1;

    }
   mid = start+(end-start)/2;
}
return ans; 
}
int main () {
     int even[8]={2,4,10,11,45,45,45,91};
cout<<firstoccurence(even,8,45);
cout<<rightoccurence(even,8,45);
return 0;
  }