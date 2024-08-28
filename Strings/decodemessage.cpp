#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeMessage(string key, string message) {
        // create mapping 
        char start='a';
        char mapping[26]={0};
        int index=0;
        while (key[index]!='\0' ){

           char ch=key[index];
           int ascii=ch-'a';
           if (mapping[ascii]==0 && ch!=' '){

               mapping[ascii]=start; // mapping stored 
           start++;
           }

           

        index++;
        }

        //use mapping 
        string ans;
        for (int i=0;i<message.length();i++){
            char  ch=message[i];
            int ascii=ch-'a';
            if (ch ==' '){
                ans.push_back(' ');

            }
            else {
                char decodedMessage=mapping[ascii];
            ans.push_back(decodedMessage);
            }
            

        }
        return ans;
    }
};
int main(){
    Solution obj;
    string in;
    getline(cin,in);
    string mess;
    getline(cin,mess);
    string out=obj.decodeMessage(in,mess);
    cout<<out;

    return 0;
}