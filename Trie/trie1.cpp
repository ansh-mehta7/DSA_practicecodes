#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class TrieNode
{
public:
    char value;
    TrieNode *children[26];
    bool isterminal;

    TrieNode(char val)
    {
        this->value = val;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isterminal = false;
    }
};

void insertWord(TrieNode *root, string word)
{
    // cout<<"recieved word "<<word<<endl;
    // base case 
    if (word.length()==0){
        root->isterminal=true;
        return ;
    }
    char ch=word[0];
    int index=ch-'a';
    TrieNode *child ;
    if (root->children[index]!=NULL){
        // present 
        child=root->children[index];
    }
    else {
        child =new TrieNode(ch);
        root->children[index]=child;
    }
    insertWord(child,word.substr(1));


}
bool searchWord (TrieNode *root,string word){
    // base case 

    if (word.length()==0){
        return root->isterminal;
    }
    char ch=word[0];
    cout<<word[0];
    int index=ch-'a';
    TrieNode *child;
    if (root->children[index]!=NULL){
        child=root->children[index];

    }
    else {
        return false ;
    }
    return searchWord(child,word.substr(1));
}
void deleteWord(TrieNode *root,string word){
    if (word.length()==0){
        root->isterminal=false ;

    }
    char ch=word[0];
    TrieNode *child ;
    int index=ch-'a';
     if (root->children[index]!=NULL){
        child=root->children[index];

    }
    else {
        return  ;
    }
    return deleteWord(child,word.substr(1));

}
vois storeString(TrieNode *root,vector<string>&suffix,string &input){
for (char ch='a' ;ch<='z';ch++){
    int index=ch-'a';
    TrieNode *next=root->children[index];
    if (next!=NULL){
        
    }

}
}
vector<string> findSuggestion(TrieNode *root,string input,vector <string>&suggestion){
// base case
if (input.length()==0){
    TrieNode *lastchar=root;
    storeString(root,suggestion);
    return;
}
}
int main()
{
    TrieNode *root = new TrieNode('-');
    insertWord(root,"cater");
    insertWord(root,"care");
    insertWord(root,"com");
    insertWord(root,"lover");
    insertWord(root,"load");
    insertWord(root,"bat");
    insertWord(root,"car");
    insertWord(root,"cat");
    insertWord(root,"lov");

    cout<<"insertion  done"<<endl;
   searchWord(root,"lover");
   cout<<endl;
    searchWord(root,"coma");
   cout<<endl;
    searchWord(root,"bat");
   cout<<endl;

    deleteWord(root,"lover");
    cout<<endl;
    cout<<searchWord(root,"lover")<<endl;


   string input ="c";
   vector <int>sugggestion;
   findSuggestion(root,input,sugggestion);

   for (auto i :sugggestion){
    cout<<i<<" ";
   }
   cout<<endl;
    return 0;
}