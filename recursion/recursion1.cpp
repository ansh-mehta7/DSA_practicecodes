#include <iostream>
using namespace std;
 int factorial (int n){
        // base case 
        if (n==1){
            return 1;
        }
        if (n==0){
            return 1;
        }
        // recursive realtion 
        int recAns=factorial(n-1);

        int ans =n*recAns;

         // processing 
        return ans ;
    }
int main () {
   int n=5;
   cout<<factorial(5);

return 0;
  }


  #include <iostream>
  using namespace std;
  void print (int n){
    if (n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    print(n-1);

  }
  int main () {
    int n=5;
    print (n);
  return 0;
    }


    #include <iostream>
    #include<math.h>
    using namespace std;
    int pow (int n){
        if (n==0){
            return 1;
        }
        int ans= 2*pow(n-1);
        return ans;

    }
    int main () {
        cout<<pow(2);

    return 0;
      }



      #include <iostream>
      using namespace std;
      int fibonnaciRecursive(int n){
        if (n==0){
            return 0;

        }
        if(n==1){
            return 1;
        }

      int ans=fibonnaciRecursive(n-1)+fibonnaciRecursive(n-2);

      return ans;
      }
      int main () {
        cout<<fibonnaciRecursive(8);
      return 0;
        }

        #include <iostream>
        using namespace std;
        int fibonacciloop(int n){
          int n0=0;
          int n1=1;
          cout<<n0<<" ";
          cout<<n1<<" ";
          for (int i=2;i<n;i++){
            int sum=n0+n1;
            cout<<sum<<" ";
            n0=n1;n1=sum;

          }
        }
        int main () {
          int n=8;fibonacciloop(n);
        return 0;
          }