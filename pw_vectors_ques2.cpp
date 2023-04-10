// sorting zeroes and ones 
#include <iostream>
#include<vector>
using namespace std;
void sortzeroandone(vector<int> &v){
  int count=0;
  for (int i=0;i<v.size();i++){
if(v[i]==0){
  count++;

  }

}

for(int i=0;i<v.size();i++ ){
  if(i<count){
    v[i]=0;

  }
  else{
    v[i]=1;
    
  }
}
}
int main () {
    int n ;
     cin>>n ;
      vector<int>v(n);
      for (int i=0;i<v.size();i++){
         cin>>v[i];

      }
      sortzeroandone(v);
     
      for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  

      }
return 0;
  }
  // two pointer approach 
  #include <iostream>
  #include<vector>
  using namespace std;
  void twopointerapproach (vector <int>&v){
int leftptr=0;
int rightptr=v.size()-1;
while(leftptr<=rightptr){
  
  if (v[leftptr]==1&&v[rightptr]==0){
    swap(v[leftptr++],v[rightptr--]);

  } 
        else if (v[leftptr]==0){
    leftptr++;
 
  }
   else  {
    rightptr--;
}

}
  }
  int main () {
    int n ;
     cin>>n ;
      vector<int>v;
      for (int i=0;i<n;i++){
       int element;
       cin>>element;
       v.push_back(element);
      }
      twopointerapproach(v);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

      }

  return 0;
    }

////////////////////////////////////////////////////////////////////////////

 #include <iostream>
    #include<vector>
    using namespace std;
    
 void evenoddvectors(vector <int>&v){

int leftptr=0;
int rightptr=v.size()-1;
while (leftptr<rightptr){
  if  (v[leftptr]%2!=0 && v[rightptr]%2==0){
  swap(v[leftptr],v[rightptr]);
    leftptr++;
  rightptr--;

 }
 
  else if (v[leftptr]%2==0 ){
  leftptr++;
  
 }
  else if (v[rightptr]%2==1){
  rightptr--;
 }

}

 }
   
    int main () {
      int n;
       cin>>n;
        vector <int>sample;
        for (int i=0;i<n;i++){ 
          int elemnt ;
           cin>>elemnt;
           sample.push_back(elemnt);

        }
        evenoddvectors(sample);
        

        for (int i=0;i<n;i++){
          cout<<sample[i]<<"\t";


        }
    return 0;
      }

      // -10 -3  4  5  6  
      // 100  9  16  25  36 
     #include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;

void returnsquares(vector<int>& v) {
    vector<int> ans;
    int leftptr = 0;
    int rightptr = v.size() - 1;
    while (leftptr <= rightptr) {
        if (abs(v[leftptr]) < abs(v[rightptr])) {
            ans.push_back(v[rightptr] * v[rightptr]);
            rightptr--;
        } else {
            ans.push_back(v[leftptr] * v[leftptr]);
            leftptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\t";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> mehta(n);
    for (int i = 0; i < mehta.size(); i++) {
        cin >> mehta[i];
    }
    returnsquares(mehta);
    return 0;
}

