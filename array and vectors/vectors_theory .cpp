//# include <vecrtor>
/* vector <datatype> vector_name)(size) we can also give size  
 size   v.size() returns the lenth of the arrray  
resize v. resize (new_size )size will change accordingly 
   capacity  v.capacity() capacity>=size 
    v.push_back(element) adds the elemts 
    v.begin() and v.end() gives the firts and the last position  of the element 
The begin() function returns an iterator that points to the first element of the vector. For example,
     begin 0 ko hi karta hai end -1 last wale ko karta hai 
    v.insert(position ,element )
    v.pop_back()
    v.ersae(position ) erasing from any given position 
 accessing the element use .at(position ) operation 
v.clear() clears all the elements 

      */
     #include <iostream>
      using namespace std ;
      #include<vector>

       int main (){
         vector <int>v;
         v.push_back(1);
         cout<<v.size()<<endl;
         cout<<v.capacity()<<endl;
         v.push_back(2);
         cout<<v.size()<<endl;
         cout<<v.capacity()<<endl;
         v.push_back(3);
         cout<<v.size()<<endl;
         cout<<v.capacity()<<endl;
         v.resize(1);
         cout<<v.size()<<endl;
         cout<<v.capacity()<<endl;
         return 0 ;
       }
       // looping in the vector 
       // operatios 
       #include <iostream>
       using namespace std;
       #include<vector>
       int main () {
        vector <int> v(5);
        for (int i=0;i<v.size();i++){
           cin>>v[i];

        }
        for (int i=0;i<v.size();i++){
          cout<<v[i]<<" ";

        }cout<<endl;

        v.insert(v.begin()+3,41);
        v.erase(v.end()-1);
        for (int i:v){
          cout<<i<<" ";
        }
       return 0;
         }
         // find the occurence of  the last element  in the vector 
         #include <iostream>
         using namespace std;
         #include<bits/stdc++.h>
         #include<vector>
         int main () {
          vector <int >sample(5);
          for (int i=0;i<sample.size();i++)
          {
            cin>>sample[i];

          }
          int key ;
           cin>>key ;
int occurence =-1;
          for (int i=sample.size()-1;i>=0;i--){
        if (sample[i]==key){
         occurence=i;
        break;// break se only if ya while loop se bahar ate hain  
        }

          }cout<<occurence;
         return 0;
           }
   #include <iostream>
   using namespace std;
   #include<bits/stdc++.h>
   #include<vector>
   bool checkforsorted(int a[],int n ){
        for (int i=1;i<n;i++){
          if (a[i]<=a[i-1]){
            return false ;

          // }else{
          //   return true;
          // } ye mistake nahi kARNI HAIN 
        }

   }return true;
   }
   int main () {
    int arr[]={1 ,12,13,24,55,77};
      int flag=checkforsorted(arr,6);
      if (flag!=0){
        cout<<" sorted ";
      }else {
        cout<<"not ";
      }

   return 0;
     }
    
    #include <iostream>
    using namespace std;
    #include<bits/stdc++.h>
    int diffrence(int a[], int n){
      int singlevariable=0;
   
   for (int i=0;i<n;i++){
    if (i%2==0)singlevariable+=a[i];
else {
  singlevariable-=a[i];
}

   }
   return singlevariable;
    }
    int main () {
      int arr[]={1,2,3,4,5,6,7,8,9,10};
     cout<<diffrence(arr,10);

    return 0;
      }