#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
        
    }
 return -1;
}
int main () {
    int arr[8];
    int key;
     cin>>key;
    
    for (int i=0;i<8;i++){
        cin>>arr[i];
    }
     cout<<linearSearch(arr,8,key);
   
return 0;
  }