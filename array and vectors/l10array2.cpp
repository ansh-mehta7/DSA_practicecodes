#include <iostream>
using namespace std;
void swap_alternate_array(int arr[],int size ){
    int i=0;
     while(i<size){
        if(i+1<size){
           // 
       // swap(arr[i],arr[i+1]);
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;

        }
        i=i+2;
     }
}
void printarray(int arr[], int size )
{ 
    for (int i =0;i< size  ;i++){
cout<<arr[i]<<"\t";

    }

}

int main () {
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};
 swap_alternate_array(even ,8);
 swap_alternate_array(odd,7);
 printarray(even,8);cout<<endl;
 printarray(odd,7);


return 0;
  }
  