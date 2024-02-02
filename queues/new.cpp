#include <iostream>
#include <algorithm>
#include <vector>
#include<queue>
using namespace std;
int main () {
    string str="ababc";
    queue<int>q;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch-'a']++;
        q.push(ch);


        // 
        while(!q.empty()){
            char frontChar=q.front();
            if(freq.[frontChar-'a']>1){
                q.pop();
            }
            else {
                cout<<frontChar<<" ";
                break;
            }
        }
        if(q.empty()){
            cout<<"#";
        }
        else {
            
        }
    }


return 0;
  }