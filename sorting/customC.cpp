#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
// void print (vector <int>&v){
//     for (int i:v){
//         cout<<i<<" ";
//     }
// }


void printvv (vector <vector<int>>&v){
 for (int i=0;i<v.size();i++){
    for (int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }
 cout<<endl;
}


 bool mycompfor1Index(vector <int>&a,vector <int>&b){
  return a[1]<b[1];
 }
    

 bool mycomp(int &a,int &b){ // comparator 
    return a>b;
 }


int main () {
    // vector <int>v={12,38,81,77,17,64,19};

    // sort(v.begin(),v.end()); inc order
    // sort(v.begin(),v.end(), mycomp) ;
    // vector of vector sorting 
    vector <vector<int>>v;
    int n;
     cin>>n;
      for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
     
      }
      cout<<"whwuifhweufhweiufhewi"<<endl;
     printvv (v);
     sort (v.begin(),v.end(),mycompfor1Index);
     cout<<" sorting after 1 index "<<endl;
     printvv (v);
return 0;
  } 