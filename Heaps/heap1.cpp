 #include <iostream>
 #include <algorithm>
 #include <vector>
 using namespace std;
 class Heap{
    public:
    int *arr;
    int size;
    int capacity;
    Heap (int capacity){
        this->arr=new int[capacity];
        this->capacity=capacity;
        // size = number of current elements in heap 
        this->size=0;

    }
    void insert(int val){
     if (size==capacity){
        cout<<" heap overflow "<<endl;
        return ;

     }
     size++;
     int index=size;
     arr[index]=val;

     // take the value to current valid pos

     while (index!=1){
        int parentIndex =index/2;

        if (arr[index]>arr[parentIndex]){
           swap(arr[index],arr[parentIndex]);
            index=parentIndex;
        }
        else {
            break;
        }
     }   
    }

     void printHeap(){
        for (int i=1;i<=size;i++) {
        cout<<arr[i]<<" ";
      }
     }

    int deletion (){
        int ans =arr[1];
        // replacement 

        arr[1]=arr[size];
        // last elemt ko ddelete kro uski leaf node wali posn se

        size--;
        // heapify 

        int index =1;
        while (index<size) // kyoki niche index jara hai 
        // 2i or 2i+1 pr 
        {
          int leftchild=2*index;
          int rightchild =2*index+1;
          // find out the largest of both child and root element 
          int largestElementIndex=index;
          if (leftchild<=size && arr[largestElementIndex]<arr[leftchild]){
            largestElementIndex=leftchild;
          }
          else if (rightchild<=size && arr[largestElementIndex]<arr[rightchild]){
            largestElementIndex=rightchild;

          }

          if (index==largestElementIndex) break;
          swap(arr[index],arr[largestElementIndex]);
          index=largestElementIndex;

        }
        return ans;

    }

 };

 void heapify (int *arr,int n ,int  index){


int leftindex=2*index;
int rightindex=2*index+1;

int laregestIndex=index;
// max from all 3 

if (leftindex<=n &&  arr[leftindex]>arr[laregestIndex]){
laregestIndex=leftindex;
}
if (rightindex<=n && arr[rightindex]>arr[laregestIndex]){
laregestIndex=rightindex;

}
// acfter this 2 condition the largestindex will be on the largest element among three
if(index!=laregestIndex){
   swap(arr[index],arr[laregestIndex]);
   // call recursion 
   index=laregestIndex;
   heapify(arr,n,index);
 }
}

 
 void buildHeap (int arr[],int n){
   for (int index=n/2;index>0;index--){
      heapify(arr,n, index);
   }
 }

void heapSort(int arr[], int n){

   while (n!=1){
      swap(arr[1],arr[n]); // n index hai not n-1 
      n--;
      heapify(arr,n,1);
   }
}

 
 int main () {

   int arr[]={0,5,10,15,20,25,12};
   buildHeap(arr,6);
   cout<<"printing  heap : "<<endl;
   for (int i=1;i<=6;i++){
      cout<<arr[i]<<" ";

   }
   cout<<endl;
   heapSort(arr,6);
   cout<<"printing  heap : "<<endl;
   for (int i=1;i<=6;i++){
      cout<<arr[i]<<" ";

   }
   cout<<endl;



   //  Heap h(20);

    // insertion 
   //  h.insert(10);
   //  h.insert(20);
   //  h.insert(5);
   //  h.insert(11);
   //  h.insert(6);
   //  cout<<" printing the values in heap: ";
   //  h.printHeap();
   //  cout<<endl;

   //  int ans=h.deletion();
   //  cout<<"ans for deleted heap "<<ans<<endl;
 
   //  cout<<" printing the values in heap: ";
   //  h.printHeap();
   
 return 0;
   }