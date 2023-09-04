#include <iostream>
using namespace std;
int main () {
    int num1=10;
    float num2=5.5;
    float result =num1 + (int )num2;
    cout<<result <<endl;

   double pi =3.147474747;
   int pipi=(int )pi;
   cout<<pipi<<endl;

   float random=65.73;
   char randomchar=(char)random; // no point precision in character
   cout<<randomchar<<endl;
  
int a=10;
int b=3.0;
float c=a/(float(b));
cout<<c;

return 0;
  }

