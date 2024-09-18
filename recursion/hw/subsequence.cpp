#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    
    void findSubsequences(string &s ,string output,int index,vector<string>&ans ){
          // base case 
          if (index>=s.length()){
            cout<<"->"<<output<<endl;
            ans.push_back(output);
            return;
          }
          char ch=s[index];
          // ya to isko me exclude karunga ya fir include karunga 
          // exclude 
           findSubsequences(s,output,index+1,ans);
        
        
          // include 
          
          output.push_back(ch);
          findSubsequences(s,output,index+1,ans);
  }
    int fun(string &s) {
            int count =0;
            string output="";
            vector <string>ans;
            findSubsequences(s,output,0,ans);

            for (string str:ans){
              if(str.length()>=3 && str.find("a")!=string::npos && str.find("b")!=string::npos
              && str.find("c")!=string::npos) count++;
           }
           return count;
    }
};
int main(){
  Solution obj;
  string input;
  vector<string>ans;
  string output="";
  getline(cin,input);
  cout<<obj.findSubsequences(input,output,0,ans);
  return 0;
}