  #include <iostream>
  #include<string>
  #include <algorithm>
  #include <vector>
  using namespace std;
  void findSubsequences(string input ,string output,int index,vector<string>&ans ){
  // base case 
  if (index>=input.length()){
    // cout<<"->"<<output<<endl;
    ans.push_back(output);
    return;
  }
  int ch=input[index];
  // ya to isko me exclude karunga ya fir include karunga 
  // exclude 
   findSubsequences(input,output,index+1,ans);


  // include 
  output.push_back(ch);
   findSubsequences(input,output,index+1,ans);

  }
  int main () {
    string input ="abc";
    string output="";
    vector <string>ans;
    findSubsequences(input,output,0,ans);
   for (string str:ans){
    cout<<"->"<<str<<endl;
   }
  return 0;
    }