#include <iostream>
#include <algorithm>
#include <vector>
// #include<queue>
using namespace std;
class Queue{
    public:

    int *arr;
    int size;
    int rear;
    int front ;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }
    void push(int val){
        // check full
        if (rear==size-1){
            // cout<<front<<" "<<rear<<endl;
            cout<<"queue is overflow"<<endl;
            return;
        }
        // empty case 
        else if (front==-1 && rear==-1) {
          front++;
          rear++;
          arr[rear]=val;

        }
        else {
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        // underflow 
        if (front ==-1 && rear==-1){
            cout<<"queue in undrflow "<<endl;
            return ;

        }
        else if (front ==rear){
            // single element 
            arr[rear]=-1;
            front =-1;
            rear=-1;
        }
        else {
            // normal case 
            arr[front ]=-1;
            front ++;
        }

    }
    bool isEmpty(){
        if (front ==-1 && rear==-1){
          return true;

        }
        else {
          return false;
        }
    }
    int getSize (){
        if (front==-1 && rear==-1){
            return 0;
        }
        else {
              cout<<"the current queue size is ";
        return rear-front+1;
        }
    }

    int getFront (){
        if (front==-1){
            cout<<"empty queue"<<endl;
        }
        else {
            return arr[front];;
        }
    }
    
    void print (){
        cout<<"printing queue :";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
Queue q(5);
q.push(10);
q.print();

q.push(20);
q.print();

q.push(30);
q.print();

q.push(40);
q.print();

q.push(50);
q.print();

cout<<q.getSize()<<endl;
q.pop();

q.print();
cout<<q.getSize()<<endl;

cout<<"queue is empty or not: "<<q.isEmpty()<<endl;

q.push(100);
q.print();
q.pop();
q.pop();
q.pop();
q.print();

cout<<q.getFront()<<endl;
q.pop();
q.print();

cout<<"queue is empty or not: "<<q.isEmpty()<<endl;
cout<<q.getSize();

}




// int main2 () {
//     queue<int>q;
//    //  insertion 
//     q.push(5);
    
//     q.pop();
//     if(q.empty()){
//         cout<<"queue is empty "<<endl;

//     }
//     else {
//    cout<<"not empty and size of queue "<<q.size();
//     }
//     //remove 
    

// return 0;
//   }