// reversing the string of array
   #include <iostream>
   using namespace std;
   int printarray(int arr[], int size ){
     for (int i=0; i<size;i++)
{
    cout<<arr[i]<<'\t';

}
   }
   int reversearray(int arr[], int size){
     int start=0;
     int end=size-1;
   while(start<=end){
 // c=a a=b b=c
 int c=arr[start];
 arr[start]=arr[end];
 arr[end]=c;
    // swap(arr[start],arr[end]);
    start++;
    end--;

   }
   }
   int main () {
    int n ;
     cin >>n ;
      int sample[100];
      for(int i =0;i<n;i++){
        cout<<"enter";
        cin>>sample[i];


      }
      reversearray(sample,n);
    printarray(sample,n);

   return 0;
     }

     
     // linear search in array 
     #include <iostream>
     using namespace std;
     bool  lsearch(int arr[], int size , int key  ){
       for(int i =0;i<size;i++){
        if(arr[i]==key)return 1;
       } return 0;
     }
     int main () {
      int arr[6]={-2,-5,99,27,78,10};
      int key ;
       cin >>key;
       int found =lsearch(arr,6,key);

        if ( found ){
          cout<<"found\n";
        }
        else{cout<<"not found ";
        }
     return 0;
       }
        
 