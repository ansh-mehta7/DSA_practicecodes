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
  // vectors are dynamic arrays in which we can insert and delete elements according to our need 
  // they are also contigious block of memory 
  // #include <vector> 
  // vector <datatype>vector_name ;
  /*  v.size() length of the array 
  v.resize(size) new size of the array 
  v.capacity() capacity of vector >= size   capapcity is compiler dependent 
  v.pushback(element)   and v.popback(element) at a particular position v.insert(position ,element)
   v.begin() and v.end()
   */
  #include <iostream >
  #include<vector>
   using namespace std ;
    int main (){
         
         vector <int > v(6);
         for (int i =1;i<=v.size();i++){
           
            cin>>v[i];


         }
         int occurence;
         int key ;
         cout<<"enter key elemet\t";
         cin>>key;

         for (int i=1;i<=v.size();i++){
            if(v[i]==key){
   occurence=i;

            }

         }cout<<occurence;
         return 0;
    }



  #include <iostream >
  #include<vector>
   using namespace std ;
    int  main (){
         
         vector <int > v(6);
         for (int i =1;i<=v.size();i++){
           
            cin>>v[i];


         }
         
         int key ;
         
         bool ans=true;

         for (int i=1;i<=v.size();i++){
            if(v[i]>v[i+1]){
           ans=false;


            }

         }if(ans){
            cout<<"array is sorted\n";

         }else{cout<<"not sorted ";}
         return 0;
    }

     
  #include <iostream >
  #include<vector>
   using namespace std ;
    int main (){
         
         vector <int > v(6);
         for (int i =1;i<=v.size();i++){
             
            cin>>v[i];


         }
         int sum =0;
         int occurence;
         for (int i=1;i<=v.size();i++){
            if (i%2==0){
               sum +=v[i];

            }else{
               sum-=v[i];

            }

         }cout<<sum;
         return 0;
    }