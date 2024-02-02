
#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
class Node {
    public:

    int data;
    Node *left=NULL;
    Node *right=NULL;

    Node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
Node *insertIntoBST(Node *root ,int data){
if (root==NULL){
    root=new Node(data);
    return root;
}
if (data>root->data){
    root->right=insertIntoBST(root->right,data);

}
else {
    root->left=insertIntoBST(root->left,data);
}
return root;
}
void createBST(Node *&root){
    cout<<"enter the data"<<" ";
    int data;
     cin>>data;
      
      while (data!=-1){
        root=insertIntoBST(root,data);
        cout<<"enter data: ";
        cin>>data;

      }
     
}

void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
     Node *front=q.front();
     q.pop();
     if(front==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
     }
     else {
        cout<<front->data<<" ";
        if (front->left!=NULL){
        q.push(front->left);
        }
        if (front->right!=NULL){
            q.push(front->right);
        }
     }
  }
}
void preOrder(Node * root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node * root){
    if (root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(Node * root){
    if (root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
Node * maxValue(Node *root){
   
  if (root==NULL){
        cout<<"no max value "<<endl;
    }
Node *temp=root;
while(temp->right!=NULL){
temp=temp->right;
}
return temp;

}

Node * minValue(Node *root){
     if (root==NULL){
        cout<<"no min value "<<endl;
    }
Node *temp=root;
while(temp->left!=NULL){
temp=temp->left;
}
return temp;
}

bool searchInBST(Node *root,int target){
    if (root==NULL){
        return false ;
    }
    if (root->data==target){
        return true;

    }
    /// call recursion 
    if (root->data<target){
        return searchInBST(root->right,target);

    }
    else return searchInBST(root->left,target);

}
Node *deleteFromBST(Node *root ,int target  ){
if (root==NULL){
    return NULL;

}
if (target==root->data){
// 4 case of deletion 
if (root->left==NULL && root->right==NULL){
    delete root;
    return NULL;
}
else if (root->left!=NULL && root->right==NULL){
    Node *childTree=root->left;
    delete root;
    return childTree;
}
else if (root->left==NULL && root->right!=NULL){
    Node *childTree=root->right;
    delete root;
    return childTree;
}
else {
   Node *maxi=maxValue(root->left);
   root->data=maxi->data;
   root->left=deleteFromBST(root->left,maxi->data);
   return root; 
 }

}
else if (root->data>target){
    // go to left 
   root->left= deleteFromBST(root->left,target);
}
// go to right
else root->right= deleteFromBST(root->right,target);


return root ;
}

Node* BSTFromInorder(int inorder[],int s, int e){
    // base case 
    if (s>e){
        return NULL;

    }
    int mid=s+(e-s)/2;
    int element=inorder[mid];
    Node *root=new Node (element);
    // baaki recurion ko dedo

    root->left=BSTFromInorder(inorder,s,mid-1);
    root->right=BSTFromInorder(inorder,mid+1,e);

    return root;
    
} 

// bst to sorted dll 

void convertBSTtoDLL(Node *root, Node *&head){
    if (root==NULL){
        return ;
    }
    convertBSTtoDLL(root->right,head);
    //n
    root->right=head;
    if (head!=NULL){
        head->left=root;
    }
    
    head=root;
    convertBSTtoDLL(root->left,head);

}
void printll(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->right;

    }
    cout<<endl;
}
Node *conevrtDLLtoBST(Node *&head,int  n){
    // base case  
    if (head==NULL || n<=0){
        return NULL;
    }
     // lnr
     //l
     Node *leftSubtree=conevrtDLLtoBST(head,n/2);
     Node *root=head;
     root->left=leftSubtree;
     // head update for right part 
     head=head->right;
     Node *rightSubtree=conevrtDLLtoBST(head,n-n/2-1);
     root->right=rightSubtree;

     return root;
    
}
int main () {
//   int inOrder[]={10,20,30,40,50,60,70};
//   int size=7;
//   int s=0;
//   int e=size-1;
//   Node *root=BSTFromInorder(inOrder,s,e);
//   levelOrderTraversal(root);
//   Node *head=NULL;
//   convertBSTtoDLL(root,head);
//   printll(head);


Node *first=new Node (10);
Node *second=new Node (20);
Node *third=new Node (30);
Node *fourth=new Node (40);
Node *fifth=new Node (50);

Node *head=first;

first->right=second;
second->left=first;
second->right=third;
third->left=second;
third->right=fourth;
fourth->left=third;
fourth->right=fifth;
fifth->left=fourth;


Node *root=conevrtDLLtoBST(head,5);
levelOrderTraversal(root);

return 0; 
  }


