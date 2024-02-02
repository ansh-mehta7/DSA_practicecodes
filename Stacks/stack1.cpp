#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
int main () {
    //creation
    stack<int>st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    //size check
    cout<<"stack size "<<st.size()<<endl;
    //remove
    st.pop();
    st.pop();
    st.pop();
    if(st.empty()){
        cout<<"stack is empty";
    }
    else {
        cout<<"stack is not empty"<<endl;

    }
    cout<<"top of stack is "<<st.top();

return 0;
  }