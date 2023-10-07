#include <iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
bool checkpallindrome(char ch[], int n){
    int i=0;
    int j=n-1;
    while (i<=j){
        if (ch[i]==ch[j]){
            i++;
            j--;

        }
        else {
            return false ;
        }
    }
return true;
}
int main () {
    char ch[100];
    cin.getline(ch,100);
    bool ispallindrome=checkpallindrome(ch,strlen(ch));
    if(ispallindrome){
        cout<<"pallindrome";
    }
    else {
        cout<<" not pallindrome";
    }
return 0;
  }
