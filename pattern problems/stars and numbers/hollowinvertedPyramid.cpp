/*
*         *
 *       *
  *     *
   *   *
    * *
     *
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int space = i;
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //  stars
     
        for (int j = 0; j <2*n-2*i-1; j++)
        if (j==0|| j==2*n-2*i-1-1){

            cout<<"*";
        }
        else {
            cout<<" ";
        }
        cout << endl;
    }
    return 0;
}