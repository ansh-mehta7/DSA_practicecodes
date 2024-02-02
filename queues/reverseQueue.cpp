#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
void reverseRecursion(queue<int>&q){
    // base case 
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();

    reverseRecursion(q);

    //backtrack
    q.push(temp);
}
void reverseQueue(queue<int>&q){
stack<int>st;
// one by one take elements from queue and push in stack 
while(!q.empty()){
    int frontElement=q.front();
    q.pop();
    st.push(frontElement);
}
// one by one take from stack and push to  queue 
while(!st.empty()){
    int stTop=st.top();
    st.pop();
    q.push(stTop);
}
} 
void reverseFirstK(queue<int>&q,int k){
    stack<int>st;
    int n=q.size();
    if(k>n || k==0) return;
    // push all k elements in queue
    for(int i=0;i<k;i++){
        int temp=q.front();
        q.pop();
        st.push(temp);
    }

    // push all k elements into queue 
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);
    }
    // pop and push n-k elements in queue again
    for(int i=0;i<(n-k);i++){
        int temp=q.front();
        q.pop();
        q.push(temp);
    }
}
void interLeaveQueue(queue<int>&first){
    queue<int>second;
    // push first half of first  queue insecond queue 
    int size=first.size();
    for(int i=0;i<size/2;i++){
        int temp=first.front();
        first.pop();
        second.push(temp);

    }
    // merge both the halfs 
    // into the original queue
    for (int i=0;i<size/2;i++){
        int temp=second.front();
        second.pop();
        first.push(temp);
        temp=first.front();
        first.pop();
        first.push(temp);
    }

}
void printFirstNegative(int *arr,int n,int k){
deque<int>dq;
// process first k elements of first window 
for(int i=0;i<k;i++){
int element =arr[i];
if(element<0){
    dq.push_back(i);
}
}
// second step process remaining windows 

for (int i=k;i<n;i++){
    // age badne se pehle purani window ka ans nikal lo 
if(dq.empty()){
    cout<<"0 ";
}
else {
    cout<<arr[dq.front()]<<" ";
}

    //removal 
    // removal  jo bhi index out of range h uske dq me se pop kr do 
if((i-dq.front())>=k){
    dq.pop_front();
}

//and addition 
if(arr[i]<0){
    dq.push_back(i);
}
 } 
// last window ka ans alag se print kar lo 
// if(dq.empty()){
//     cout<<"0 "<<endl;
// }
// else {
//     cout<<arr[dq.front()]<<" ";
// }
   
 }


int main () {
    // queue<int>q;
    // q.push(2);
    // q.push(-5);
    // q.push(4);
    // q.push(-1);
    // q.push(-2);
    // q.push(0);
    // q.push(5);
    int arr[]={2,-5,4,-1,-2,0,5};
    int size=7;
     int k=3;
    // reverseQueue(q);
    // reverseRecursion(q);
    // reverseFirstK(q,4);
    // interLeaveQueue(q);
    printFirstNegative(arr,size,k);

    // while(!q.empty()){
    //     int element=q.front();
    //     q.pop();
    //     cout<<element<<" ";
    // }
return 0;
  }