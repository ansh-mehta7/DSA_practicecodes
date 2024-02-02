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


int main () {
    Node *root=NULL;
   createBST(root);
   levelOrderTraversal(root);
   cout<<endl;

   cout<<endl<<"inOrder traversal";
   inOrder(root);
    cout<<endl<<"preOrder traversal";
   preOrder(root);
   cout<<endl<<"postOrder traversal";
   postOrder(root);
   cout<<"print min value "<<endl;
   Node *temp=minValue(root);
   if (temp!=NULL){
   cout<<"min value "<<temp->data<<endl;
   }
   Node *tempp=maxValue(root);
   if (tempp!=NULL){
   cout<<"max value "<<tempp->data<<endl;
   }
//    int t;
//    cout<<"enter the target"<<endl;

//    cin>>t;
//    while(t!=-1){
//     bool ans=searchInBST(root,t);
//     if(ans==true){
//         cout<<"ams is found "<<endl;
//     }
//     else {
//         cout<<"not found "<<endl;
//     }
//     cout<<"enter the value of t again ";
//     cin>>t;
//    }
  
  int target;
  cout<<"enter the value of target: ";
  cin>>target;
   while (target!=-1){
    root=deleteFromBST(root,target);
    cout<<endl<<"printing level order traversal "<<endl;
    levelOrderTraversal(root);

      cout<<"enter the value of target: ";
  cin>>target;
   }

return 0; 
  }