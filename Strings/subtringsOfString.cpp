#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
 string customSubstring(string s, int start, int length) {
        string result = "";
        for (int i = start; i < start + length && i < s.length(); i++) {
            result += s[i];
        }
        return result;
    }
void allSubstrings(string &str){
    // 
    for (int i=0;i<str.length();i++){
        for (int j=1;j<=str.length()-i;j++){
            // int len=j-i;
            cout<<customSubstring(str,i,j)<<"->"<<endl;
        }
    }
}

int main () {
    string demo="abc";
    allSubstrings(demo);
return 0;
  }