                                
#include <iostream>
#include <map>

using namespace std;

// Node class represents a node in a linked list
class Node {
public:
    // Data stored in the node
    int data;       
    // Pointer to the next node in the list
    Node* next;      

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node *checkloop(Node *head){
  map<Node *,bool>visisted;
  Node *temp=head;
  while(temp!=NULL){
    if (visisted[temp]==false){
      visisted[temp]=true;
      temp=temp->next;
    }
    else return temp;
  }
  return nullptr;
}

void printLL(Node *head){
// never traverse with the original pointer 
Node*temp=head;
while (temp!=NULL){
cout<<temp->data<<"-> ";
temp=temp->next;
}
cout<<endl;
}


int main() {
    // Create a sample linked list with a loop
    Node* node1 = new Node(1);
       Node* head = node1;
    Node* node2 = new Node(2);
    node1-> next = node2;
    Node* node3 = new Node(3);
    node2-> next = node3;
    Node* node4 = new Node(4);
    node3->next = node4;
    Node* node5 = new Node(5);
    node4-> next = node5;
   printLL(head);
    
    Node* loopStartNode = checkloop(head);

    if (loopStartNode) {
        cout << "Loop detected. Starting node of the loop is: " << loopStartNode->data << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }
  
    return 0;
}
                                
                            