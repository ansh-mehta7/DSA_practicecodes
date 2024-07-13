#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
void nextsmallest(int arr[], int  n ){
   vector<int>temp(n,-1);
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        temp[i]=arr[j]; 
        break;
      }
    }
   }
   for (auto i: temp){
    cout<<i<<" "<<endl;
   }

}
void nextgreater(int arr[],int n,vector <int>&temp){
  
  stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--) {
        while (st.top() <= arr[i]) {
            st.pop();
        }
        temp[i] = st.top();
        st.push(arr[i]);
    }
}

vector<int>nextSmallerElement(int arr[],int size,vector <int>&ans){
    stack<int>st;
    st.push(-1);
    // traverse from rightmost element to the leftmost element 
  for (int i=size-1;i>=0;i--){
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
    cout<<"Next Smallest Element"<<endl;
    vector<int> temp(size, -1);
    nextgreater(arr, size, temp);

    // Print the result in the main function
    cout << "Next Greater Element: ";
    for (auto i : temp) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
  }
//  via stack
//   void nextsmallestStack(int arr[], int n ){
//   stack<int>st;
//   st.push(-1);
//   stack<int>temp;
//   int i=n-1;
//   while(i!=-1){
//      if(arr[i]>st.top()){
//       temp.push(st.top());
//       st.push(arr[i]);
      
//      }
//      else {
//       st.pop();
//       temp.push(st.top());
//       st.push(arr[i]);
//      }
//      i--;
//   }
//   while(!temp.empty()){
//     cout<<temp.top()<<" ";
//     temp.pop();
//   }
// }
// int main() {
//   int arr[]={8,4,6,2,3};
//   nextsmallestStack(arr,5);

//   return 0;
// }