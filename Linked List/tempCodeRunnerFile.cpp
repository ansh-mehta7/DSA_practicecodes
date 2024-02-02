#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Node {

    public:
    int data;
    Node *next;
    
    Node ()
    {
        // cout<<"inside default constructor "<<endl;
        this->next=NULL;
    }
    Node (int data){
        // cout<<"inside parametrised  constructor "<<endl;
      this->data=data;
      this->next=NULL;
      
    }
    ~Node (){
        cout<<"destructor called for "<<this->data<<endl;
         
    }
};


void printLL(Node *head){
// never traverse with the original pointer 
Node*temp=head;
while (temp!=NULL){
cout<<temp->data<<"-> ";
temp=temp->next;
}
cout<<endl;
}

int getLength(Node *head){

    Node *temp=head;
    int count =0;
    while (temp!=NULL){
       count ++;
       temp=temp->next;
    }
    return count;
}

void insertAtHEAD(Node* &head,Node *&tail, int data){
    // empty ka matlab head and tail both are NULL
if (head==NULL){
    // step 1 create a new node 
    Node *newnode=new Node (data);
    // step 2 head ko newnode pe point kr do  head ko newnode pe point kr do 
    head=newnode;
    tail=newnode;
    // becuase ye single node h to head and taik ko ispe point krwa do 
}
else 
{
// step 1 create a new node 
Node *newnode=new Node(data);
//  step 2 newnode ka next head pe point kro 
newnode->next=head;
// step 3 head ko newnodebna do  
head=newnode;

}
}

void insertAtTAIL(Node* &head,Node* &tail,int data)
{

    if (head==NULL){
        // empty LL
        Node *newnode =new Node(data);
        head =newnode;
        tail=newnode;
        // single node h to head and tail ko ispe point  krwa do 
    }
    else {

        // create a new node 
        Node *newnode =new Node(data);
        // tail ka next ko newnode pe daalo
        tail->next=newnode;
        // newnode ko tail dedo 
        tail=newnode;
    }
}

void createTAIL(Node * &head, Node* &tail){

    // create a temp node 
    Node *temp=head;
    while (temp->next!=NULL){
            temp=temp->next;
    }
    // jab ye loop end hoga tab 
    //temp last node pr aa jaega fir tail =temp krke tail ko last node pe daal dege 
    tail=temp;

}
void insertAtPosition (Node* &head,Node* &tail,int data ,int position ){

  int length=getLength(head);

if (position==1){
    insertAtHEAD(head,tail,data);
}

else if (position==length+1){
insertAtTAIL(head,tail,data);
}

else {
// create a new node 
Node *newnode=new Node (data);
// traverse prev and current to pistion 

Node *prev=NULL;
Node *curr=head;

while(position!=1){
    prev=curr;
    curr=curr->next;
    position--;
}
// step 3 
// attch prev to new node 
prev->next=newnode;
// step4
// attach newnode to curr
newnode->next=curr;

}
}
void deleteNode(Node* &head,int position ){
   int length=getLength(head);
    if (head==NULL){
         cout<<"cant delete"<<endl;
        return;
        }
        if (head->next==NULL){
            Node *temp=head;
            delete temp;
            head=NULL;
            return;
        }
    if (position==1){
        // first node ko delete kr do 
         Node *temp=head;
         head=head->next;
         temp->next=NULL;
         delete temp;

    }
   else if (position ==length){
  
    Node *prev=NULL;
    Node *curr=head;
     while(head->next!=NULL){
      prev=curr;
      curr=curr->next; 
     }
             prev->next=NULL;
            delete curr;

    }
  else {
      // set prev and current pointers 
      Node *prev=NULL;
      Node *curr=head;
      while(position!=1){
        prev=curr;
        curr=curr->next;
        position--;

      }   
      prev->next=curr->next;

      curr->next=NULL;

      delete curr;
  }

}
int main (){

    Node *head=NULL;
    Node *tail=NULL;
    insertAtHEAD(head,tail,50);
    insertAtHEAD(head,tail,40);
    insertAtHEAD(head,tail,30);
    insertAtHEAD(head,tail,20);
    insertAtHEAD(head,tail,10);
   
     deleteNode(head,4);
    printLL(head);
     deleteNode(head,1);
    printLL(head);

    deleteNode(head,2);
    printLL(head);
 
    deleteNode(head,1);
    printLL(head);
    
    deleteNode(head,1);
    printLL(head);
    deleteNode(head,1);
}


int main2 () {
    // Node a;
    Node *first= new Node (10);
    Node *second= new Node (20);
    Node *third= new Node (30);
    Node *fourth= new Node (40);
    Node *fifth= new Node (50);


    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
// linked list is created  
Node *head =first;
Node *tail=fifth;
printLL(head);

// insertAtHEAD(head,tail,500);
insertAtTAIL(head,tail,500);

printLL(head);
cout<<getLength(head);
return 0;
  }