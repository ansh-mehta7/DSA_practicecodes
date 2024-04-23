#include<iostream>
using namespace std ;
int increaseby1(int n){
  cout<<"in function value is"<<n<<endl;
  cout<<&n;
  return n+1;
}
void sort0n1(int arr[], int size ){
    int s=0;
    int e=size-1;
    while (s<=e){
      // c1 
      if (arr[s]==0) s++;
      if (arr[e]==1) e--;
      //c 
      if (arr[s]==1 && arr[e]==0) swap (arr[s++],arr[e--]);
    }

}
void arrayshiftby1(int arr[], int size){
  int temp =arr[size-1];
  for (int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
  }
  arr[0]=temp;
}
void arrayshiftbyK(int arr[],int size ,int k ){
  // copy the values in temp array 
  // 1 2 3 4 5 6 7 
  k=k%size;
  int temp[k];
  for (int i=0;i<k;i++){
    temp[i]=arr[size-k+i];
  }

    cout<<endl<<endl;
  // temp {5,6,7}
  // copy the values 
   for (int i = size -  1; i >= k; i--)
  {
    arr[i ] = arr[i-k];
  }
 
cout<<endl<<endl;
  
  for (int i=0;i<k;i++){
    arr[i]=temp[i];
  }

  cout<<endl<<endl;
}
int main (){
    int arr[]={10,20,30,40,50,60,70};
    // arrayshiftby1(arr,6);
    arrayshiftbyK(arr,7,48);
    for (auto i: arr){
      cout<<i<<" ";
    }

   return 0;
 }
 