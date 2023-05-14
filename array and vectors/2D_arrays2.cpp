#include <iostream>
#include<vector>
using namespace std;
int selectedrow (vector<vector<int>>&v){
    int global_i_index=-1;
    int global_1_count=-1;
    int coloumn=v[0].size();
    for (int i=0;i<v.size();i++){
    for(int j=0;j<coloumn;j++){
        if (v[i][j]==1){
            int local_1_count=coloumn-j;
if (local_1_count>global_1_count){
    global_1_count=local_1_count;
    global_i_index=i;

}
        }
       
    }}
    return global_i_index;
}
int leftmostomne(vector<vector<int>>&v){
    int selectedrow=-1;
    int pointer =-1;
    int j=v[0].size()-1;
  for (int i=0;i<v.size();i++){
    while (j>=0&&v[i][j]==1){
        pointer=j;
        selectedrow=i;
        j--;
    }
  }
return selectedrow;
}
int main () {
    int n ,m;
     cin >>n>>m;
vector <vector<int>>vec(n,vector<int>(m));
 for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>vec[i][j];

        }
      }
      int  res=leftmostomne(vec);
      cout<<res;
return 0;
  }
  //  90 dgree rotaion of matix without creating a new array 
  #include <iostream>
  #include<vector>
  #include<algorithm>
  using namespace std;
    void rotate_array(vector<vector<int > > &v){
        for (int i =0;i<v.size();i++){
            for (int j=0;j<i;j++){
         swap(v[i][j],v[j][i]);

            }
        }
for (int i=0;i<v.size();i++){
reverse (v[i].begin(),v[i].end());

}
return ;
  }
  int main () {
    int n;
     cin>>n ;
     vector <vector<int>> problem(n,vector<int>(n));
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>problem[i][j];
         
        }
    }
 rotate_array(problem); 
for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<problem[i][j];
         
        }
        cout<<endl;

     }
  return 0;
  } 