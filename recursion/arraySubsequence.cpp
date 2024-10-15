#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printSubseq(int index,vector<int>&ds,vector<int>&arr,int sum,int k){
    if(index==arr.size()){
        if(sum==k){
            for(auto it:ds){
            cout<<it<<"->";
        }
        cout<<endl;
        }
        return;
    }
    // exclude the index
    printSubseq(index+1,ds,arr,sum,k);
    // include the index 
    ds.push_back(arr[index]);
    printSubseq(index+1,ds,arr,sum+arr[index],k);

    ds.pop_back();
    
}
int main () {
    vector<int>arr={1,2,1};
    int k=3;
    int sum=0;
    vector<int>ds;
    int index=0;
    printSubseq( index,ds,arr,sum,k);
return 0;
  }