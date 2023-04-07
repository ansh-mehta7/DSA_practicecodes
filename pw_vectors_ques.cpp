#include <iostream>
#include<limits.h>
using namespace std;
int main () {
    int array []={3,4,1,7,6,2,5,0};
    int target=7;
    for (int i =0; i<8;i++){
         for (int k=i+1;k<8;k++){
             if(array[i]+array[k]==target){
                cout<<array[i]<<"\t"<<array[k]<<endl;
        //  array[i]=array[k]=INT_MIN;
         break;
             }
         }
    }
return 0;
  }   
// sum triplets 
#include <iostream>
#include<limits.h>
using namespace std;
int main () {
    int array []={2,4,7,8,10,9,11,12,6,19,-1,1};
    int target=18;

    for (int i =0; i<12;i++){
         for (int z=i+1;z<12;z++){
            for (int k=z+1;k<12;k++){
             if(array[i]+array[k]+array[z]==target){
                
                cout<<array[i]<<"\t"<<array[z]<<"\t"<<array[k]<<endl;
          // array[z]=array[i]=array[k]=INT_MIN;
             }
         }
         }
    }
return 0;
  }
  //  second largest element 
  #include <iostream>
  #include<limits.h>
  using namespace std;
  int largestindex( int a[], int size){
    int largestvalue=INT_MIN;
    int largestindexvalue=-1;


  for (int i=0;i<size;i++){
     if(a[i]>largestvalue){
        largestvalue=a[i];
  largestindexvalue=i;
     }
    
  }
  for(int i=0;i<size;i++){
    if(a[i]==largestvalue && largestindexvalue!=i){
        a[i]=-1;
    }
  }

 return largestindexvalue;
  }
  int main () {
  int sample[]={2,4,8,8,5,5,5,6,1,10,3,10};
  int flag1= largestindex(sample,12);

  
 sample[flag1]=-1;
 int flag2=largestindex(sample,12);
 cout<<sample[flag2];
 
  return 0;
    }
    //  {2,4,8,9,5,6,1,-1,3,10};
    
  #include <iostream>
  #include<limits.h>
  using namespace std;
  int secondlargestelement (int a[] , int size)
  {
    int firstlargestvalue=INT16_MIN;
    int secondlargestvalue=INT16_MIN;
   
    for (int i=0;i<size;i++){
        if(a[i]>firstlargestvalue){
            firstlargestvalue=a[i];

        }
    }
    for (int i=0;i<size;i++){
        if(a[i]>secondlargestvalue && a[i]!=firstlargestvalue){
            secondlargestvalue=a[i];

        }
    }
    cout<<secondlargestvalue;

    return secondlargestvalue;

  }
  
  int main () {
  int sample[]={2,4,8,8,5,5,5,6,1,10,3,10};
  secondlargestelement(sample ,12);
  return 0;
    }
    


    // ROTATION OF ARRAY BY Kth POSITION 
    #include <iostream>
    using namespace std;
    int roatatearray(int a[], int k, int n){
      k=k%n;

int newarray[100];
 for (int i =0, j=n-k;i<k;i++,j++){
  newarray[i]=a[j];
  

 }
 for (int i=k, j=0;i<n;i++,j++){
  newarray[i]=a[j];

 }
 for(int i=0; i<n;i++){
  cout<<newarray[i]<<"\t";

 }
 return 0;
    }
    int main () {
      int sample[]={1,2,3,4,5,6,7};
      int k ;
       cin>>k;
       roatatearray(sample,k,7);
    return 0;
      }

      #include <iostream>
      #include<vector>
      #include <bits/stdc++.h>
      using namespace std;
      int main () {
        vector<int>v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
       

        int k;
        cin>>k;
        k=k%v.size();
       
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k-1);
        reverse(v.begin()+k,v.end());
        for(int i=0;i<v.size();i++){
          cout<<v[i]<<"\t";

        }
        

      return 0;
        }

// given q queries u need to find if the element is ptresentr in the array or not 

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int main () {
  int n ;
   cin>>n;

   vector <int> v(n);
   int i=0;
   for (i; i < n; i++)
   {
     cin>>v[i];

   }
   int findquerry[100000]={0};
 for (int k=0;k<n;k++){
  findquerry[v[k]]++;
 }
 cout<<"enter the number of  queries ";
 int q;
cin>>q;
while(q--){
   int queryelemnt;
    cin>>queryelemnt;
    cout<<findquerry[queryelemnt]<<endl;

}

   
return 0;
  }



    