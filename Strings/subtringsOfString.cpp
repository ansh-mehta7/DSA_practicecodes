#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
void allSubstrings(string &str){
    // 
    for (int i=0;i<str.length();i++){
        for (int j=1;j<=str.length()-i;j++){
            // int len=j-i;
            cout<<str.substr(i,j)<<"->"<<endl;
        }
    }
}
int main () {
    string demo="abc";
    allSubstrings(demo);
return 0;
  }