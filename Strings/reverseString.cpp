#include <iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void reverseString(char ch[], int size){
    int i=0;
     int j=size-1;
     while (i<=j){
        swap (ch[i++],ch[j--]);
     }

}
void upperCase(char ch[], int n){
    int index=0;
     while (ch[index]!='\0'){
        char currentChar=ch[index];
        // check if lower case 
        if (currentChar>='a' && currentChar<='z'){
             ch[index] = currentChar-'a'+'A';
        }
        index++;
     }
}
int main () {
    char ch[100] ;
   

       cin.getline(ch,100);
       cout<<ch<<endl;
  
    reverseString(ch,strlen(ch));

   upperCase(ch,100);
    cout<<ch<<endl;

return 0;
  }