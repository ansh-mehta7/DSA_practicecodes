#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
#include<map>

using namespace std;
class Node {
    public:
    int data;
    Node *left ;
    Node *right;
    Node (int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
}
};
Node *createTree(){
    cout<<"enter the value of node ";
    int val;
    cin>>val;
    if(val==-1){
        return NULL;

    }
    Node *root =new Node (val);
    root->left=createTree();
    root->right=createTree();
return root;
}
void preorder(Node *root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inOrder (Node *root){
 if (root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder (Node *root){
 if (root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}
void levelOrderTraversal(Node *root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
    Node *temp=q.front();
    q.pop();

    if(temp==NULL){
     cout<<endl;
     if(!q.empty()){
        q.push(NULL);
     }
    }
    else {
    cout<<temp->data<<" ";
    if(temp->left!=NULL){
        q.push(temp->left);
    }
    if(temp->right!=NULL){
        q.push(temp->right);
    }

    }
    }
}
void printLeftView(Node *root, int level ,vector <int> &leftView  ){
    if (root ==NULL){
 return ;
    }
   if(level==leftView.size()){
// meaning left view node is achieved 
leftView.push_back(root->data);
   }
   printLeftView(root->left,level+1,leftView);
   printLeftView(root->right,level+1,leftView);

}
void printRightView(Node *root, int level ,vector <int> &rightView  ){
    if (root ==NULL){
 return ;
    }
   if(level==rightView.size()){
// meaning left view node is achieved 
rightView.push_back(root->data);
   }
   printRightView(root->right,level+1,rightView);
   printRightView(root->left,level+1,rightView);

}



// void printTopView(Node *root){
//   map<int,int>hdToNodemap;
//   queue<pair<Node* ,int>>q;
//   q.push(make_pair(root,0));
//   while(!q.empty()){


//     pair<Node*,int>temp=q.front();
//     q.pop();
//     Node *frontNode=temp.first;
//     int hd=temp.second;
     // find if there is a entry for hd in map 
//     if(hdToNodemap.find(hd)==hdToNodemap.end()){
//         hdToNodemap[hd]=frontNode->data;

//     }
//     if(frontNode->left!=NULL){
//     q.push(make_pair(frontNode->left,hd-1));
//     }
//     if (frontNode->right!=NULL){
//    q.push(make_pair(frontNode->right,hd+1));
//     }
    
//   }
//   for (auto i:hdToNodemap){
//     cout<<i.second<<" ";

//   }

// }



void printBottomView(Node *root){
  map<int,int>hdToNodemap;
  queue<pair<Node* ,int>>q;
  q.push(make_pair(root,0));
  while(!q.empty()){


    pair<Node*,int>temp=q.front();
    q.pop();
    Node *frontNode=temp.first;
    int hd=temp.second;
    // fid if there is a entry for hd in map 
    
        hdToNodemap[hd]=frontNode->data;

    
    if(frontNode->left!=NULL){
    q.push(make_pair(frontNode->left,hd-1));
    }
    if (frontNode->right!=NULL){
   q.push(make_pair(frontNode->right,hd+1));
    }
    
  }
  for (auto i:hdToNodemap){
    cout<<i.second<<" ";

  }

}
void printLeftBoundary(Node *root){
    if (root==NULL){
        return  ;

    }
    if (root->left== NULL && root->right==NULL){
        return ;
    }
    cout<<root->data<<" ";
    if (root->left!=NULL){
        printLeftBoundary(root->left);
    }
    else {
        printLeftBoundary(root->right);
    }


}
void printLeaftNode (Node *root){
    if (root==NULL){
        return ;
    }
    if (root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeaftNode(root->left);
    printLeaftNode(root->right);
}
void printrightBoundary(Node *root){

     if (root==NULL){
        return  ;

    }
    if (root->left== NULL && root->right==NULL){
        return ;
    }
    if (root->right!=NULL){
        printrightBoundary(root->right);
    }
    else {
        printrightBoundary(root->left);
    }
    cout<<root->data<<" ";
}

void boundaryTraversal(Node *root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printLeaftNode(root);
    printrightBoundary(root->right);
}
int main () {
    

    // vector<int>leftView;
    vector<int>rightView;
    Node *root=createTree();
    levelOrderTraversal(root);
    // cout<<"printing left view "<<end;
    // printLeftView(root,0,leftView);
    // cout<<"printing right view "<<endl;
    // printRightView(root,0,rightView);
    // for(int i=0;i<rightView.size();i++){
    //     cout<<rightView[i]<<" ";
    // }
    //  cout<<"printing top view "<<endl;
    //  printTopView(root);
    //  cout<<"printing bottom view "<<endl;
    //  printBottomView(root);
    boundaryTraversal(root);
return 0;
  }