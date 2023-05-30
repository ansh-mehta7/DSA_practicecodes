 #include <iostream>
 #include<algorithm>
 #include<vector>
 using namespace std;
int getlenth(char arr[]){
int count =0;
for (int i=0; arr[i]!='\0';i++){
    count++;

}
return count;
 }
 void reverse (char arr[],int n){

int start=0;
int end=n-1;
while (start<=end){
    swap(arr[start++],arr[end--]);

}

 }
 int main () {
    char name [20];
    cout<<"enter your name "<<endl;
     cin>>name;
// name[3]='\0';
 cout<< "your name is "<<name<<endl;
 int _n=getlenth(name);
reverse(name,_n);
cout<<name;
 return 0;
   }
   
   