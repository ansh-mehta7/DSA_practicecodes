// arrays with function 
#include <iostream>
using namespace std;


int printarray(int arr[], int size ){
     for (int i=0; i<size;i++)
{
    cout<<arr[i];

}

}
int main () {
    int num[14]={1};
    
    printarray(num,14);


int size=sizeof(num)/sizeof(int);
cout<<endl<<size;

return 0;
  }




// to give varible as a size in  an array is a bad practice instead we just give an constant size  number in  an array  
# include <iostream>
#include<limits.h>
 using namespace std ;
 int check_max(int arr[],int n ){
  int maxi=INT_MIN;

   for(int i=0;i<n;i++){
// 
maxi=max(maxi,arr[i]);
   }
   return maxi;

 }
 int check_min(int arr[],int n ){
  int mini=INT_MAX;

   for(int i=0;i<n;i++){
if(arr[i]<mini){
  mini=arr[i];

}
   }
   return mini;

 }
  int main (){
     int size ;
     cout<<"enter the size of array\n";
      cin >> size;
      int sample[100];
      for (int i =0;i<size;i++){
         cout<<"enter";
         cin>>sample[i];

      }
      cout<<check_max(sample,size)<<endl;
      cout<<check_min(sample,size)<<endl;
return 0;
    
  }







  