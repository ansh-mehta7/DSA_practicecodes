#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&st, int element){
// base case 
if (st.empty()){
    st.push(element);
    return;
}
int temp=st.top();
st.pop();


// rec call
insertAtBottom(st,element);

// backtracking
st.push(temp);
}
void reverseStack(stack<int>&st){
// base case 
if (st.empty()){
    return;
}
int temp=st.top();
st.pop();
// rec call 
reverseStack(st); 

// backtracking
 
insertAtBottom(st,temp);
}
void insertSorted(stack<int>&st,int element){
    // base case 
    if (st.empty()|| element>st.top()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();

    // recursion
    insertSorted(st,element);
    // backtracking
    st.push(temp);
}
void sortStack(stack<int>&st){

    // base case 
    if (st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();
    //recursion call 
    sortStack(st);

    // backtracking
    insertSorted(st,temp);
}

int main () {
    stack<int>st;
    int element=400;

    st.push(14);
    st.push(8);
    st.push(11);
    st.push(84);
   
    insertAtBottom(st,element);
     reverseStack(st);
    cout<<endl<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    
    // insertSorted(st,5);
    cout<<endl<<endl;
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


return 0;
  }