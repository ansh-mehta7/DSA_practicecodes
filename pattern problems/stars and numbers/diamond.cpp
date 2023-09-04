/*
   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *
*/


#include <iostream>
using namespace std;
int main()
{ // upper 

    int num;
    cin >> num;
    int n=num/2;
    for (int i = 0; i < n; i++)
    {
        int space = n - i - 1;
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //  stars
        int stars=i+1;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;

    }

    // lower 
        for (int i = 0; i < n; i++)
    {
        int space = i;
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //  stars
        int stars=n-i;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}




