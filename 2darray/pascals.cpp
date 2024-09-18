#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void pascal(int n ){
 vector<vector<int>>ans;
 for(int i=0;i<n;i++){
    vector<int>temp;
    for(int j=0;j<=i;j++){
        if(i==j){
            temp.push_back(1);
        }
        else if(j==0) temp.push_back(1);
        else {
            temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
        }

    }
    ans.push_back(temp);
 }
 for(int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
 }

}
int main () {
    int n;
    cin>>n;
    pascal(n);
   
return 0;
  }