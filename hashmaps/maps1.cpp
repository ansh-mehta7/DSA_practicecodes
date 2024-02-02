 #include <iostream>
 #include <algorithm>
 #include <vector>
 #include<unordered_map>
 using namespace std;
 int main () {
  // map ke andar hamesha pair ati hain 
    // creation 
    unordered_map<string,int>mapping;
    // inserion 
    pair<string,int>p= make_pair("ansh",21);
    pair<string,int>q("divyansh",21);
    pair<string,int>r;
    r.first="arpit";
    r.second=21;
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    mapping["akshansh"]=19;

    cout<<"size of map "<<mapping.size()<<endl;
    cout<<mapping.at("ansh")<<endl;
    cout<<mapping["arpit"]<<endl;
    

    cout<<mapping.count("akshansh")<<endl;
    cout<<"size of map "<<mapping.size()<<endl;
  // returns an iterator if present otherwise it will be prent at the end of the map 

    if(mapping.find("bhishek")!=mapping.end()){
        cout<<"found "<<endl;
    }
   else cout<<"not found "<<endl;

   cout<<mapping["mehta"]<<endl; // it will print 0 if value is not present and i f thw value is present it will print that entry 

    cout<<"size of map "<<mapping.size()<<endl;
    // the size here will be 5 becuase in square notation the entry is not present a new entry is created pointing to zero 





 return 0;
   }