#include <iostream>
using namespace std;
#include <vector>
bool func1 (vector  <int> &v){
   
 // 4 5 10 3 2 
 // 4 9 19 22 24 
 int psum=0;
      for (int i=1;i<v.size();i++){
          
          v[i]=v[i-1]+v[i];

      }
}
void print (vector <int> &v){
    for (int i=0;i<v.size();i++){
         cout<<v[i]<<"\t";
    }
}
int main () {
     int m ;
      cin>>m ;
       
    vector <int> prefixsum(m);
    for (int i=0;i<prefixsum.size();i++){
        cin>>prefixsum[i];

    }
    func1(prefixsum);
    
  print(prefixsum);


return 0;
  }