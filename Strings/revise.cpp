#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int findlength(char ch[], int size){
    int i=0;
    int length=0;
     while(ch[i]!='\0'){
      length++;
      i++;
     }
     return length;
}
void reversechar (char ch[], int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(ch[s++],ch[e--]);
    }
}
int main (){
   // char arrays 
   char ch[100];
//    cin>>ch;
  cin.getline(ch,100); 
   cout<<"ptinting the array "<<ch;
//  int len= findlength(ch,100);
 int len= strlen(ch);
 cout<<len;
// reversechar(ch,strlen(ch));
 reverse(ch,ch+strlen(ch));
cout<<ch;

    return 0;
}