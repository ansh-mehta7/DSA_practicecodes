#include <iostream>
#include<vector>
using namespace std;
void print (vector<int>v){
    int size =v.size();
    for (int i=0;i<size;i++){
        // cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl;
        for (auto i :v){
            cout<<i<<endl;
        }
    }
}
int main () {
// in vector dont tell the size of  the vector 
vector <int>v; // default with 0 size and no data
vector <int>ayy(5,-1);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.pop_back();


print(v);
print(ayy);
v.clear();
// again vector 
v.push_back(100);
print(v);
return 0;
  }