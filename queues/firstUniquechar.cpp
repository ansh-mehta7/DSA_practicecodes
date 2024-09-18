#include<bits/stdc++.h>
using namespace std;
	void FirstNonRepeating(string A ,string &ans){
		    // string ans;
		    queue<char>q;
		    int freq[26]={0};
		    for (int i=0;i<A.length();i++){
		        char ch=A[i];
		        freq[ch-'a']++;
		        q.push(ch);
		    
		    while(!q.empty() ){
		        char frontchar=q.front();
		        if(freq[frontchar-'a']>1){
		            q.pop();
		        }
		        else {
		        //   ans.push_back(frontchar);
				// cout<<frontchar<<"->";
				ans+=frontchar;
		          break;
		        }
		    }
		    if(q.empty()){
		        // ans.push_back('#');
				// cout<<"#->";
				ans+='#';
		    }
		    // return ans;
		}
	}
int main () {
    string str="ababc";
	string ans="";
    FirstNonRepeating(str,ans);
	cout<<ans;
return 0;
  }