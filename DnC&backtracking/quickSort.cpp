 #include<iostream>
 #include<vector>

 using namespace std;
 int partition (int arr[], int start ,int end ){

    int pivotelement =arr[start];
    int pivotindex=start;
    int count =0;

    for (int i=start+1;i<=end;i++){
          if (arr[i]<=pivotelement){
               count++;
          }
    }
    //place pivot at right place 
    int rightIndex=start+count;
    swap(arr[rightIndex], arr[pivotindex]);
    pivotindex=rightIndex;


 // left and right wale array le lie quickSort ko call kra hai
int i=start,j=end;

 while (i<pivotindex && j>pivotindex){

   while (arr[i]<=pivotelement){
        i++;
    }
   while (arr[j]>pivotelement){
        j--;

    }
    if (i<pivotindex && j>pivotindex) {

        swap(arr[i++],arr[j--]);
    }
 }  
cout<<pivotindex<<" ";
return pivotindex; 
 }
 void QuickSort (int arr[],int start, int end ){

// base case 
if (start>=end){
    return;

}
// partition 
int p =partition (arr,start,end);

QuickSort(arr,start,p-1);
QuickSort(arr,p+1,end);  


 }
  int main (){

int arr[]={8,3,5,9,11,32,84,34,11,38,44,20,54,29,2,1};
int m=16;

QuickSort(arr,0,m-1);
cout<<endl<<endl;
for (int i=0; i<m;i++){

    cout<<arr[i]<<" ";

}


    return 0;

  }