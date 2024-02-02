#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
#include<unordered_map>
using namespace std;
void countCharacter(unordered_map<char,int>&mapping ,string str){
   for (int i=0;i<str.length();i++){
    char ch=str[i];
    mapping[ch]++;
   }
}
int main () {
    string s="lovebabbar";
    unordered_map<char,int>mapping;
    countCharacter(mapping,s);
    for (auto i:mapping){
        cout<<i.first<<" "<<i.second<<endl;
    }

return 0;
  }