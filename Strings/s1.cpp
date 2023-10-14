#include <iostream>
#include<string>
using namespace std;
int main () {
//     string name ;
//     cin>> name ;
//     getline(cin,name);
    
//      int index=0;
//       while (name[index]!='\0'){
//         cout<<"index "<<index<<"character "<<name[index]<<endl;
//         index++;
//       }
//       int value=(int )name[5];
//       cout<<"index 6"<<value<<endl; // 0  ascii value for null charcacter
//       cout<<name.length()<<endl;
//       cout<<name.empty()<<endl;//0 false
//       string temp="";
//       cout<<temp.empty()<<endl; // 1 true 
    //   string str1="anhs";
    //    string str2="mehta";
    //    string str3=str1.append(str2);
    //  cout<<  str3<<endl; 

// str3.erase(3,3);
// cout<<str3;


string str1= "shahrukh khan and kajol";
string str2="kajol";
 int found = str1.find(str2);
if (str1.find(str2)==string::npos){
cout<<"not founnd "<<endl;
}
else {
  cout<<" the string found at "<<found<<endl;// returns the first index.
}
if (str1.compare(str2)==0){
  cout<<"matching"<<endl;
}
else {
  
  cout<<" not matching"<<endl;
}
cout<<str2.substr(1,8);
return 0;
  }
  // #include <iostream>
  // #include<vector>
  // using namespace std;
  // int main () {
  //   string str="ansh";
  //   for (auto ch:str){
  //     cout<<ch<< " ";
  //   }
  //   cout<<endl;
  //   vector <int >v;
  //   v.push_back(12);
  //   v.push_back(13);
  //   v.push_back(15); 
  //  for (auto num:v ){
  //   cout<<num<<" ";
  //  }
  // return 0;
  //   }