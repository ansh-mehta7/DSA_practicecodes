#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
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
    // it returns root node of the created tree 

    Node *createTree(){
      cout<<"enter the value for node: "<<endl;
      int data;
       cin>>data;
       if (data==-1){
        return NULL;
       }
        // step 1 create node 
       Node *root=new Node( data);
       // create left subtree 
      cout<<"left of node "<<root->data<<endl;
       root->left=createTree();


       // create right subtree 
      cout<<"right of node "<<root->data<<endl;
      root->right=createTree();

      return  root;

    }
    void preOrder (Node *root){
      // base case 
      if(root==NULL){
        return ;
      }
      // n
      cout<<root->data<<" ";
      // l
      preOrder(root->left);
      //r
      preOrder(root->right);


    }
    void inOrder (Node *root){

      // lnr
      if(root==NULL){
        return;
      }
      inOrder(root->left);
      cout<<root->data<<" ";
      inOrder (root->right);
      
    }
    void postOrder (Node *root){

      // lnr
      if(root==NULL){
        return;
      }
      postOrder(root->left);
      postOrder (root->right);
      cout<<root->data<<" ";

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
    Node *root=createTree();
    cout<<"the root node is  "<<root->data<<endl;
    cout<<"preorder traversal :";
    preOrder(root);
    cout<<endl;
    cout<<"inOrder traversal :";
    inOrder(root);
    cout<<endl;
    cout<<"postOrder traversal :";
    postOrder(root);
    cout<<endl;
    cout<<"level order traversal"<<endl;
    levelOrderTraversal(root);


return 0;
  }