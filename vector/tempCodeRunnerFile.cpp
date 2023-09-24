
  #include <iostream>
  #include<vector>
  using namespace std;
  int main () {
    vector <vector<int> >v(5,vector <int>(10,0));
int size =v.size();
    for (int i=0;i<size;i++){
        for (int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

  return 0;
    }