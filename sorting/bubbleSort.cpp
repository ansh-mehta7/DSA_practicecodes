#include <iostream>
#include <vector>
using namespace std;
void bubbleSortAsc(vector<int> &v){
    // outer loop
    for (int i=0;i<v.size();i++){
   int n=v.size();
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
    vector <int > v={-1,50,3,-8,47,6};
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