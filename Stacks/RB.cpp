#include <iostream>
#include <algorithm>
#include <vector>
#include<stack>
#include<string>
using namespace std;
bool checkRedundant(string &str){
    stack<char>st;
    for (int i=0;i<str.length();i++){
        char ch =str[i];
        if (ch=='(' ||ch=='+' ||ch=='-' ||ch=='*' ||ch=='/'){
            st.push(ch);
        }
        else if (ch==')'){
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if (temp=='+' || temp=='-' || temp=='/' || temp=='*'){
                    operatorCount++;
                }
                st.pop();
            }
            // yha par tab aenge jab astack ke top par ek opening bracket hoga 
            // ya stack empty hoga 
            // yo us open bracket ko bhi pop kr do 
            st.pop();
            if (operatorCount==0){
                // no opeartor means rb is present 
                return true;
            }
        } 
    }
    return false;
}
int main () {
    string str="(((a+B)+c)+d)/l)/z)";
    bool ans =checkRedundant(str);
    if (ans==true){
        cout<<"rb present "<<endl;
    }
    else {
        cout<<"not present "<<endl;
    }
return 0;
  }