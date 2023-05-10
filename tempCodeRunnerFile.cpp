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