#include <iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void reverseString(char ch[], int size,int i,int j){
   // base case
   if(i>j) return;
   // 1 case 
   swap(ch[i],ch[j]);
   reverseString(ch,size,i+1,j-1);

}
// void upperCase(char ch[], int n){
//     int index=0;
//      while (ch[index]!='\0'){
//         char currentChar=ch[index];
//         // check if lower case 
//         if (currentChar>='a' && currentChar<='z'){
//              ch[index] = currentChar-'a'+'A';
//         }
//         index++;
//      }
// }
int main () {
    char ch[100] ;


       cin.getline(ch,100);
         int i=0;
      int j=strlen(ch)-1;

  
    reverseString(ch,strlen(ch),i,j);

   // upperCase(ch,100);
    cout<<ch<<endl;

return 0;
  }