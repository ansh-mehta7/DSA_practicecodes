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
  char ch=input[index];
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





      

#include <iostream>
  #include<string>
  #include <algorithm>
  #include <vector>
  #include<cmath>
  using namespace std;
  void binarySubs( string &s){
    int n= s.size();
    int total =pow(2,n);
  for (int index=0;index<total;index++){
    // binary 
    int i= index;
         int j=0;  // for characters
    while (i>0){
 
      int bit=i&1;
      if (bit==1){
       cout<<s[j]<<" ";
      }
    
      i>>=1;
        j++;

    }
    cout<<endl;
  }
  }
   int main(){
  string input ="abcd";
   binarySubs(input);
   return 0;
   }