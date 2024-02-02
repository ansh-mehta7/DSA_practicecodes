#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve2 (int *arr,int size){
cout<<"size of array in solve function "<<sizeof(arr)<<endl;
cout<<"inside solve arr "<<arr<<endl;
cout<<"indside solve &arr "<<&arr<<endl;
// address uth ke jara h pointer se islie size 4 /8 aega 
}
void solve (int* &p){
  p=p+1;
}
int main (){

  int a =5;
   int *p=&a;
   cout<<"p "<<p<<endl;
   cout<<"&p "<<&p<<endl;
   cout<<"*p "<<*p<<endl;
   solve (p);
   cout<<"p "<<p<<endl;
   cout<<"&p "<<&p<<endl;
   cout<<"*p "<<*p<<endl;

}
int main2 () {
    // int arr [5]={1,2,3,4,5};
    
     // int *ptr=&arr; // probelmatic
    //pointer to an array 
    // int (*ptr)[5]= &arr;

int arr[]={10,20,30,40};
cout<<"size of array in main "<<sizeof(arr)<<endl;
// solve (arr,4);
cout<<"inside main arr "<<arr<<endl;
cout<<"indside main &arr "<<&arr<<endl;


return 0;
  }