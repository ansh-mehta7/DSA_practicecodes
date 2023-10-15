#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector <int >&v){
    int n=v.size();
    // skipping for i=0
    for (int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;
     for (j;j>=0 && v[j]>key;j--){
          v[j+1]=v[j];
          
        }
        v[j+1]=key;
    }

}
int main () {
       vector <int > v={1,-5,9,177,32,-18};
    int n=6;
    insertionSort(v);
    for (int i: v){
        cout<<i<<" ";

    }
return 0;
  }