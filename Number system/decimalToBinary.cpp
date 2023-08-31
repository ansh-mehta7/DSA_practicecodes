#include<iostream>
#include<cmath>
using namespace std ;
int decimalToBinaryMethod1 (int n){  
   // remiander method 
   int i=0;
   int binaryNo=0;
 while (n>0){

   int bit =n%2;
   
    binaryNo=bit*pow(10,i++)+binaryNo;
   n=n/2;

 }
return binaryNo;
} 


int decimalToBinaryMethod2(int n ){
   // bitwise 
int i=0;
   int binaryNo=0;
 while (n>0){

   int bit =n&1;
   // cout<<bit<<endl;
    binaryNo=bit*pow(10,i++)+binaryNo;
   n=n>>1;


 }
return binaryNo;
} 

int main (){
    int n;
     cin>>n;
    cout<< decimalToBinaryMethod1(n)<<endl;
    cout<< decimalToBinaryMethod2(n)<<endl;
    return 0;
 }