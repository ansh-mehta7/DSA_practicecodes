#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector <int >&v){
  // outer loop 
  int n=v.size();
   for (int i=0;i<n-1;i++){
      // let min index be ith element 
      int minindex=i;
       // inner loop that will compare and will find min element
       for (int j=i+1;j<n;j++){
         if (v[j]<v[minindex]){
          minindex=j;
         }
       }
       swap (v[i],v[minindex]);
   }
}
int main () {
    vector <int > v={-1,50,3,-8,47,6};
    int n=6;
    selectionSort(v);
    for (int i: v){
        cout<<i<<" ";

    }
return 0;
  }