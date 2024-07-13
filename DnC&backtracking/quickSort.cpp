 #include<iostream>
 #include<vector>

 using namespace std;
 int partition (vector<int>&arr, int start ,int end ){

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

return pivotindex; 
 }
 void QuickSort (vector<int>&arr,int start, int end ){

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

vector<int>arr(5000,2);
int m=arr.size();

QuickSort(arr,0,m-1);
cout<<endl<<endl;
for (int i=0; i<m;i++){

    cout<<arr[i]<<" ";

}


    return 0;

  }