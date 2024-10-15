#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
void printPermutation (string &str,int index){
// base case 
if (index >=str.length()){
    cout<<str<<" ";
    return;

}
for (int j=index;j<str.length();j++){
    swap (str[index],str[j]);
    // recursion 
    printPermutation(str,index+1);
    // backtracking 
    swap (str[index],str[j]);

}  
}
void substring (string &str){
    for (int i=0;i<str.length();i++){
        for (int j=i;j<str.length();j++){
            cout<<str.substr(i,j-i+1)<<endl;
        }
    }
}

int main () {
    string str="abc";
    string str2="abc";
    int index=0;

     printPermutation(str,index);
     cout<<endl;
     substring(str2);
return 0;
  }