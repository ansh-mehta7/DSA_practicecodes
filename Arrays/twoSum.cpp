#include <iostream>
using namespace std;

void targetSum(int arr[],int n,int target){
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
int main () {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target ;
    cin>>target;
    targetSum(arr,10,target);

return 0;
  }