#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
void printSubSequences(string input,string output, int index){
   // base case
   if(index>=input.size()){
    cout<<"-"<<output<<endl;
    return;
   }

   char ch=input[index];
   output.push_back(ch);
   // inclusion 
   printSubSequences(input,output,index+1);


//  exclusion 
   output.pop_back();
   printSubSequences(input,output,index+1);

}
int main () {
    string str="abc";
    int index=0;
    string output="";
    printSubSequences(str,output,0);
return 0;
  }