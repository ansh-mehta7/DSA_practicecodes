#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int main () {
  int n ;
   cin>>n;

   vector <int> v(n);
   int i=0;
   for (i; i < n; i++)
   {
     cin>>v[i];

   }
   int findquerry[100000]={0};
 for (int k=0;k<n;k++){
  findquerry[v[k]]=1;
 }
 cout<<"enter the number of  queries ";
 int q;
cin>>q;
while(q--){
   int queryelemnt;
    cin>>queryelemnt;
    cout<<findquerry[queryelemnt]<<endl;
    
}

   
return 0;
  }

    