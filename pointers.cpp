#include <iostream>
#include<bits/stdc++.h>
using namespace std ;
void swap(int x , int y ){
     int temp=x;
     x=y;
     y=temp;

}
void swap_refrence(int *x ,int *y )
 {
int temp=*x;
*x=*y;
*y=temp;

 }
 void first_last_index(string s ,char c, int *f,int *l){

 }
 int main(){
    int a=10;
    int b=20;

     swap(a,b);
     cout<<a<<" "<<b<<endl;
     swap_refrence(&a,&b);
     cout<<a<<" "<<b<<endl;
string s ="aaabac";
char ch='a';
int first =-1;
 int last =-1;
first_last_index(s,ch, &first,&last);

    return 0 ;
     
 }