// #include <iostream>
// #include<string.h>
// using namespace std;
// int findLength(char ch[], int size){
// int length=0;
//  for (int i=0;i<size;i++){
//     if (ch[i]=='\0'){
//         break;

//     }
//     else {
//         length++;
//     }

//  }
//  return length;
// }
// int main () {
//     char ch[100];
//     cin.getline(ch,100);
//     // cin>>ch;
//     int len =findLength(ch,100);

//     cout<<"length of string is "<<len<<endl;
//     cout<<strlen(ch);
      
// return 0;
//   }
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    string ans="ansh";
    for(auto ch:ans){
        int ascii=ch-'a';
        cout<<ascii<<" ";
    }
return 0;
  }