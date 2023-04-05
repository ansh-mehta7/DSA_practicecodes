#include <iostream>
#include<limits.h>
using namespace std;
int main () {
    int array []={3,4,1,7,6,2,5,2,0,3,4};
    int target=7;
    for (int i =0; i<11;i++){
         for (int k=i+1;k<11;k++){
             if(array[i]+array[k]==target){
                cout<<array[i]<<"\t"<<array[k]<<endl;
         array[i]=array[k]=INT_MIN;
         break;
             }
         }
    }
return 0;
  }