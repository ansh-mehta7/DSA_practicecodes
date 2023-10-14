  #include <iostream>
  #include<vector>
  using namespace std;
  int main () {
    string str="ansh";
    for (auto ch:str){
      cout<<ch<< " ";
    }
    cout<<endl;
    vector <int >v;
    v.push_back(12);
    v.push_back(13);
    v.push_back(15);
   for (auto num:v ){
    cout<<num<<" ";
   }
  return 0;
    }