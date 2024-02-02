#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printPermutation (string &str,int index,vector <string>&output){
// base case 
if (index >=str.length()){
    output.push_back(str);
    return;

}
for (int j=index;j<str.length();j++){
    swap (str[index],str[j]);
    // recursion 
    printPermutation(str,index+1,output);
    // backtracking 
    swap (str[index],str[j]);

}  
}
int main () {
    string str="abc";
    int index=0;
    vector <string> output;
     printPermutation(str,index,output);
     for (string i: output){
        cout<<i<<" ";
     }

return 0;
  }