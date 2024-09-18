#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
int solve (stack<int>&st, int &pos,int &ans){
    // base case 
    if (pos==1){
        ans=st.top();
        return ans;
    }
    // processing 
    int temp=st.top();
    st.pop();
    pos--;

    // recursion 
    solve (st,pos,ans);

    //backtrack 
    st.push(temp);

}
int getMidElement(stack<int>&st){
    int size=st.size();
    if (st.empty()){
        cout<<" stack is empty"<<endl;
        return -1 ;
    }
    int pos=0;
    // odd case 
    if (size&1){
      pos=size/2+1;
    }
    else {
        pos=size/2;
    }
    //even case 
    int ans=-1;
    solve(st,pos,ans);
    return ans;
}
int main () {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    // st.push(60);
    int size=st.size();
    if (st.empty()){
        cout<<" stack is empty"<<endl;
        return -1 ;
    }
    int pos=0;
    // odd case 
    if (size&1){
      pos=size/2+1;
    }
    else {
        pos=size/2;
    }
    //even case 
    int ans=-1;
    solve(st,pos,ans);
    cout<<ans;


return 0;
  }