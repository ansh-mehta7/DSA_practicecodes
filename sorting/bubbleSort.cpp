#include <iostream>
#include <vector>
using namespace std;
void bubbleSortAsc(vector<int> &v){
    // outer loop
   int n=v.size();
    for (int i=0;i<n-1;i++){
    // inner loop
        for (int j=0;j<n-i-1;j++){
            if (v[j]>v[j+1]){
                swap(v[j],v[j+1]);

            }
        } 
    }

}
void bubbleSortDesc(vector<int> &v){
    // outer loop
    for (int i=0;i<v.size();i++){
   int n=v.size();
    // inner loop
        for (int j=0;j<n-i-1;j++){
            if (v[j]<v[j+1]){
                swap(v[j],v[j+1]);

            }
        } 
    }

}
int main () {
    vector <int > v={10,20,30,40,50,60};
    int n=6;
    bubbleSortAsc(v);
    for (int i: v){
        cout<<i<<" ";

    }
    cout<<endl;
    bubbleSortDesc(v);
    for (int i: v){
        cout<<i<<" ";

    }
return 0;
  }