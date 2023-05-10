/* vector of vectoor data types 
vector<vector<data_type>> vector_name;
vector <int>v1
vector <int>v2
vector <int>v3
 2d vector  = vector<vector<int>>V={v1,v2,v3}
 we want an n x m vector 
vector<vector<int>>V(n,vector<int>(m,0));//initialisng by 0 also 

*/





#include <iostream>
using namespace std;
int main () {
    int r1 ,c1,r2,c2;
    cout<<"enter r1  ";
    cin>>r1;
    cout<<"enter c1 ";
    cin>>c1;

    int a[r1][c1];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            cin>>a[i][j];

        }
    }
    cout<<"enter r2 ";
    cin>>r2;
    cout<<"enter c2 ";
    cin>>c2;
    int b[r2][c2];
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            cin>>b[i][j];

        }
    }
    if (c1!=r2){
        return -1;
    }
    int c[r1][c2]; 
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            int value=0;
            for (int k=0;k<c1;k++){
 
                value+=a[i][k]*b[k][j];
                c[i][j]=value;

            }
        }
    } 
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout <<endl;

    }
    cout<<endl;
    
    int c_transpose[c2][r1];
    for(int i=0;i<c2;i++){
        for (int j=0;j<r1;j++){
            c_transpose[i][j]=c[j][i];
        }
    } 
 for (int i=0;i<c2;i++){
        for (int j=0;j<r1;j++){
            cout<<c_transpose[i][j]<<" ";
        }
        cout <<endl;

    }
return 0;
  }
  // 2d arrays problems pascals triangle 
#include <iostream>
#include<vector>
using namespace std;
 vector <vector<int>>pascaltriangle(int n ){
 vector<vector<int>>pascal(n);
 for (int i=0;i<n;i++){ 
    pascal[i].resize(i+1);
  
    for (int j=0;j<i+1;j++){
        if (j==0|| j==i){
            pascal[i][j]=1;

        }else {
            pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];

        }
    }
 }
return pascal;
 }
int main () {
    int n ;
     cin>>n ;
     vector<vector<int>>ans;
    ans =pascaltriangle(n);
    for (int i=0;i<ans.size();i++){
          int space =n-i;
    for (int k=0;k<space;k++){
        cout<<" ";
    }
        for (int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";

        }
       cout<<endl;
    }

return 0;
  }