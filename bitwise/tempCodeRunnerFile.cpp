 #include <iostream>
 using namespace std;
 int main () {
    int n=1; 

    cout<<~n<<endl;
    cout<<~(n)<<endl;
    cout<<(~n)<<endl;
 

//   int a=5;
//   int b=-5;
//   cout<<(a^b)<<endl;

 int a=7;
 cout<<(a<<3)<<endl;
 // neg number and signed int the compiler will handle it will give the write ans 
int d=-100;
cout<<(d>>1)<<endl;


 unsigned int e=-100;
cout<<(e>>1)<<endl;




  // not allowed in c++
// int n=10;
// cout<<(n<<-1);// 



 return 0;
   }