#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
using namespace std;
class Stack {
  public :
  int *arr;
  int size;
  int top;

  Stack(int size){
    arr=new int [size];
    this->size=size;
    this->top=-1;
  }

  void push (int data){
    if (top==size-1)
    {
      cout<<"stack overflow condition"<<endl;
      return;
    }
    else {
    top++;
    arr[top]=data;
    }
  }

  void pop (){
    if(top==-1){
      cout<<"stack underflow"<<endl;
      return;
    }
    else {
    top--;
    }
  }

  bool isEmpty(){
    if(top==-1){
      return true;
    }
    else {
    return false;
    }
  }

  void getTop(){
    if (top==-1){
      cout<<"stack is empty"<<endl;
      return;
    }
    else {
    cout<<"the top element of stack is "
        <<arr[top];
    }
  }

  int getSize(){
   
    return top+1;
  }

  void print(){
    cout<<"top element is "<<arr[top]<<" and top is at "<<top<<endl;
    cout<<"stack :";
    for (int i=0;i<getSize();i++){
      cout<<arr[i]<<" ";

    }
    cout<<endl;
  }

};

int main () {
    Stack st(8);
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"the stack size is "<<st.getSize()<<endl;
    st.print();
    st.push(40);
    st.push(50);
    cout<<"the stack size is "<<st.getSize()<<endl;
    st.print();
    st.push(60);
    st.push(70);
    st.push(80);

   cout<<"the stack size is "<<st.getSize()<<endl;
    st.print();
    st.push(90);
    st.print();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.print();
    st.pop();
    st.print();
 
    
    cout<<"the stack size is "<<st.getSize()<<endl;
    st.print();

    // st.print();
   st.getTop();
   cout<<st.isEmpty();
   
return 0;
  }