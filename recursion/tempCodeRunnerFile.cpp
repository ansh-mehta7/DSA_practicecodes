#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
void subs (string input ,string output , int index ){

// base cse 
if (index >= input.length()){
   cout<<output<<endl;
   return ;

}
 subs (input,output,index+1);
 char ch=input[index];
 output.push_back(ch);
 subs(input,output,index+1);

// rec call 

}
int main () {
   string input ="abc";
    string output ="";
     int index =0;
      subs(input,output,index);

return 0;
  }