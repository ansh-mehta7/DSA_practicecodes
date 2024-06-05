#include <iostream>
#include<stack>
using namespace std;
bool redundantBrackets(string s){
  stack<int>st;
   for(int i=0;i<s.length();i++){
      char ch=s[i];
       int countoperator=0;
      if(ch=='('){
          st.push(ch);
      }
     
      else if(ch=='*' || ch=='/' || ch=='+' || ch=='-')
      {
           countoperator++;
          while(!st.empty() && ch==')'){
            if(countoperator>0) st.pop();
          }
      }

   }
   if(st.empty()) return false;
   return true;
}
int main() {
  string s="(((a+B)+c)+d)))";
  bool ans=redundantBrackets(s);
  if(ans){
    cout<<"present ";
  }
  else{
    cout<<"absent";
  }
  return 0;
}