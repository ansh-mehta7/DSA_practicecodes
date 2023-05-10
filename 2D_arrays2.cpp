#include <iostream>
#include<vector>
using namespace std;
int maxonerows(vector<vector<int> >&v){
  
  int maxonesinallrow=-1;
  int selected_ithrow=-1;
int coloumn=v[0].size();
for (int i=0;i<v.size();i++){
    for(int j=0;j<coloumn;j++){
        if (v[i][j]==1){
             int maxonesineachrow=coloumn-j;
            if (maxonesineachrow>maxonesinallrow){
                maxonesinallrow=maxonesineachrow;
                selected_ithrow=i; 
                

            }
            


        }
    }
}


return  selected_ithrow;
}

int leftmostone(vector<vector<int > > &v){
int selected_ithrow=-1;
int leftmostonepointer=-1;
int j=v[0].size()-1;

 while (j>=0&&v[0][j]==1){
leftmostonepointer=j;
selected_ithrow=0;
j--;

 }

for (int i=0;i<v.size();i++){
    while (j>=0&& v[i][j]==1){
    leftmostonepointer=j;
    selected_ithrow=i;
        j--;
    

    }
}
return selected_ithrow;

}

int main () {
    int n ,m ;
     cin>>n>>m ;
      vector <vector<int> >vec(n ,vector<int>(m));
      for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>vec[i][j];

        }
      }
   int res= leftmostone(vec);
//    int res= maxonerows(vec);

   cout<<res<<endl;

      
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