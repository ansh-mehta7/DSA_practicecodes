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