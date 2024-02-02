#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
class DemoPQ{
    public:
    int data;
     int rowIndex;
     int colIndex;

     DemoPQ(int data,int ri, int ci){
        this->data=data;
        this->rowIndex=ri;
        this->colIndex=ci;
     }
};
class comparator {
    public:
    bool operator ()(DemoPQ *a,DemoPQ *b){

        return a->data>b->data;

    }
};
void mergeKSortedArrays(int arr[][4],int n,int k,vector<int>&ans)

{

    priority_queue<DemoPQ*, vector<DemoPQ*> , comparator >pq;
    // proess first elements in  k arry 

    for (int row=0;row<k;row++){
        int element=arr[row][0]; // first element of each array 
        DemoPQ *temp=new DemoPQ(element,row,0);
        
        pq.push(temp);
    }
    while(!pq.empty()){
        DemoPQ *front=pq.top();
        pq.pop();
        int topData=front->data;
        int topRow=front->rowIndex;
        int topCol=front->colIndex;

        // store this top data in vector 
        ans.push_back(topData);
        if (topCol+1<n){
            int element=arr[topRow][topCol+1];
            DemoPQ *obj=new DemoPQ(element,topRow,topCol+1);
            pq.push(obj);

        }

    }

}
int main () {
    int arr[3][4]={
          {1,4,8,10},
          {2,3,6,9},
          {5,7,11,12}  
    };
    int n=4;
    int k=3;

    vector<int>ans;
    mergeKSortedArrays(arr,n,k,ans);
    cout<<"printing ans array "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
  }