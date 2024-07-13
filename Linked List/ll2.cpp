#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
      Node (){
        this->prev=NULL;
        this->next=NULL;
      }
      Node (int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
      }
      ~Node(){
       cout<<"destructor called for "<<this->data<<endl;
      }
};
void printLL(Node* head){
Node *temp=head;
while (temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<endl;
}

int getLength(Node* head){
    Node *temp=head;
    int len=0;
    while (temp!=NULL){
       len++;
       temp=temp->next; 
    }
    return len;
}

void insertAtHEAD(Node* &head,Node* &tail,int data){
    // if ll is empty 
   if (head==NULL){
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
   }
 else {
   Node *newnode=new Node(data);
   newnode->next=head;
   head->prev=newnode;
   head=newnode;

 }

}
void insertAtTAIL(Node* &head,Node* &tail,int data){
    // if ll is empty 
   if (head==NULL){
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
   }
 else {
   Node *newnode=new Node(data);
   tail->next=newnode;
   newnode->prev=tail;
   tail=newnode;

 }

}
void insertAtpos(Node* &head, Node* &tail ,int data,int pos ){
  int len=getLength(head);
    if (head==NULL){
    Node *newnode=new Node(data);
    head=newnode;
    tail=newnode;
   }
   else {
    
    if (pos==1){
    insertAtHEAD(head,tail,data);
   }
   else if (pos==len+1){
 insertAtTAIL(head,tail,data);
   }
  else {

  // create a new node 
 Node *newnode=new Node(data);
 // prev and curr ko right pos pe lao 
 Node *prevNode=NULL;
 Node *currNode=head;
 while (pos!=1){
 prevNode=currNode;
 currNode=currNode->next;
 pos--;
 }
 prevNode->next=newnode;
 newnode->prev=prevNode;
 newnode->next=currNode;
 currNode->prev=newnode;
  }
 }
  
}
void deleteNode(Node* &head,Node* &tail,int pos){
 
  if (head==NULL){
    cout<<"cannot delete bcoz list is empty";
  
    return;
  }
   if (head==tail){
    Node *temp=head;
    delete temp;
    head=NULL;
    tail=NULL;
    return;
  }
  
 int len=getLength(head);
 if (pos==1){
  Node *temp=head;
  head=temp->next;
  temp->next=NULL;
  head->prev=NULL;
  delete temp;
 }

 else if (pos==len){
Node *prevNode=tail->prev;
prevNode->next=NULL;
tail->prev=NULL;
delete tail;
tail=prevNode;
 }

 else {
Node *prevNode=NULL;
Node *currNode=head;
while(pos!=1){
  prevNode=currNode;
  currNode=currNode->next;
  pos--;
}
Node *nextNode=currNode->next;
prevNode->next=nextNode;
currNode->next=NULL;
currNode->prev=NULL;
nextNode->prev=prevNode;
delete currNode;

 }
  }

bool checkLoop(Node *&head){
  Node *slow=head;
  Node*fast=head;
  while (fast!=NULL){
    fast=fast->next;
    if (fast!=NULL){
   fast=fast->next;
   slow=slow->next;
    }
    if (fast==slow){
      return true;
    }
  }
  return false ;

}
Node *getStartingPoint(Node *&head){
// check for loop
Node *slow=head;
Node *fast=head;
while (fast!=NULL){
  fast=fast->next;
  if(fast!=NULL){
    fast=fast->next;
    slow=slow->next;

  }if (fast==slow){
 break;
  }
}
slow=head;
while(slow!=fast){

slow=slow->next;
fast=fast->next;
}
// at this point we found out thaty loop is present 
// return the starting index of loop of LL
return slow;
}

void removeLoop(Node *&head)
{
// check for loop
Node *slow=head;
Node *fast=head;
while (fast!=NULL){
  fast=fast->next;
  if(fast!=NULL){
    fast=fast->next;
    slow=slow->next;

  }if (fast==slow){
 break;
  }
}
slow=head;
while(slow!=fast){

slow=slow->next;
fast=fast->next;
}
// at this point we found out thaty loop is present 
// return the starting index of loop of LL
Node *startingPoint= slow;
Node *temp =startingPoint;
while (temp->next!=startingPoint){
  temp=temp->next;
}
  temp->next=NULL;

}
void addOne (Node *&head){

  // reverse 
  //gfg pe kia h 
  
}
int main () {

 Node *head=NULL;
 Node *tail=NULL;
//  insertAtHEAD(head,tail,40);
//  insertAtHEAD(head,tail,30);
//  insertAtHEAD(head,tail,20);
 insertAtHEAD(head,tail,1);
 insertAtTAIL(head,tail,3);
 insertAtTAIL(head,tail,8);
  printLL(head);
//  insertAtpos(head,tail,15,2);
  // deleteNode(head,tail,1);
  // tail->next=head->next->next->next;
  // printLL(head);
  // cout<<"starting point of linked list loop is "<<getStartingPoint(head)->data<<endl;;
  // removeLoop(head);
  // printLL(head);


return 0;
  }