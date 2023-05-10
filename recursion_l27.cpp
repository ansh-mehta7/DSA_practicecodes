#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{

    // in recusion  we try to solve a bigger problem  by finf]ding out
    // solutions to smallesr subproblems we reprsent the problem in the foerm of functons and these
    
    int result=factorial(5);
    cout<<result;
    return 0 ;
     
}
#include <iostream>
using namespace std;
int fibonacci (int n ){
    if(n==0||n==1){
         return n ;

    }
    if(n>1){
        return fibonacci(n-1)+fibonacci(n-2);

    }
}
int main () {
   
    cout<< fibonacci (7);

return 0;
  }