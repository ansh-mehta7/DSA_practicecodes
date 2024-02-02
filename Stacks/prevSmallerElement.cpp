#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
vector<int>prevSmallerElement(int arr[],int size,vector <int>&ans){
    stack<int>st;
    st.push(-1);
    // traverse from rightmost element to the leftmost element 
  for (int i=0;i<size;i++){
     int curr=arr[i];
     while(st.top()>=curr){
        st.pop();
     }
      ans[i] =st.top();
     st.push(curr);
  }
  return ans;
}
int main () {
    int arr[5]={8,4,6,2,3};
    int size=5;
    vector<int>ans(size);
    ans=nextSmallerElement(arr,size,ans);
    for(auto i:ans ){
        cout<<i<<" ";
    }

return 0;
  }