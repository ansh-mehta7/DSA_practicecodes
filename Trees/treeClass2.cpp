#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
#include<map>
using namespace std;
class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};


int searchInOrder (int inOrder[], int size , int target){
    for(int i=0;i<size;i++){
        if(inOrder[i]==target){
            return i;
        }
    }
    return -1;
}


Node *constructTreeFromPreAndInorder(int preOrder[], int inOrder[],int &preIndex,int inOrderStart, int inOrderEnd,int size ){
// base case
if(preIndex>size || inOrderStart>inOrderEnd){
    return NULL;
}
int element=preOrder[preIndex];
preIndex++;

Node *root=new Node (element);
// element search krna padega inorder me 
int position=searchInOrder(inOrder,size,element);
root->left=constructTreeFromPreAndInorder(preOrder,inOrder,preIndex,inOrderStart,position-1,size);

root->right=constructTreeFromPreAndInorder(preOrder,inOrder,preIndex,position+1,inOrderEnd,size);

return root;
}




Node *creareTreefromPostAndInorder(map<int,int>&valueToIndexmap,int postOrder[], int inOrder[],int &postIndex,int inOrderStart, int inOrderEnd,int size){

if (postIndex<0 || inOrderStart>inOrderEnd){
    return NULL;

}

int element=postOrder[postIndex];
postIndex--;

Node *root=new Node (element);
int position=valueToIndexmap[element];

root->right=creareTreefromPostAndInorder(valueToIndexmap,postOrder,inOrder,postIndex,position+1,inOrderEnd,size);

root->left=creareTreefromPostAndInorder(valueToIndexmap,postOrder,inOrder,postIndex,inOrderStart,position-1,size);
return root;
}


void createMapping(int inOrder[],int size,map<int,int>&valueToIndexmap){


    for(int i=0;i<size;i++){
        int element=inOrder[i];
        int index=i;
        valueToIndexmap[element]=index;
    }
}


void levelOrderTraversal (Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
      Node* front=q.front();
      q.pop();
   if (front==NULL){
    cout<<endl;
    if(!q.empty()){ 

    q.push(NULL);
    }
   }
   else{

      cout<<front->data<<" ";
      if (front->left!=NULL){
        q.push(front->left);
      }
      if(front->right!=NULL){
        q.push(front->right);
      }
   }
    }
    }

int main () {
    // int inOrder[]={10,8,6,2,4,12};
    // int preOrder[]={2,8,10,6,4,12};
    // int preIndex=0;
    // int size=6; 
    // int inOrderStart=0;
    // int inOrderEnd=5;
    // Node *root=constructTreeFromPreAndInorder(preOrder,inOrder,preIndex,inOrderStart,inOrderEnd,size);
    // cout<<" printing the tree :"<<endl;


    int inOrder[]={8,14,6,2,10,4};
    int postOrder[]={8,6,14,4,10,2};
    int size=6;
    int postIndex=size-1;
    int Inorderstart=0;
    int inorderend=size-1;
    map<int,int>valueToIndexmap;
    createMapping(inOrder,size,valueToIndexmap);
   Node *root=creareTreefromPostAndInorder(valueToIndexmap,postOrder,inOrder,postIndex,Inorderstart,inorderend,size);

    cout<<" printing the tree :"<<endl;
    levelOrderTraversal(root);

    



return 0;
  }