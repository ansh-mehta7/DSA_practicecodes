#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
void lastOccurence(string s,int index,char ch,int &ans){
   // base case
   
   if (index>=s.size()){
    return ;
   }
   // 1 case 
   if (s[index]==ch){
    ans=index;

   }
   lastOccurence(s,index+1,ch,ans);
}

void lastOccurencertol(string s,int index,char ch,int &ans){
   // base case
   
   if (index==0){
    return ;
   }
   // 1 case 
   if (s[index]==ch){
    ans=index;

   }
   lastOccurence(s,index-1,ch,ans);
}

int main () {
    string s="dddbbbdfrd";
    char ch='d';
    int index=s.size()-1;
    int ans=-1;
    lastOccurence(s,index,ch,ans);
    cout<<ans;

return 0;
  }