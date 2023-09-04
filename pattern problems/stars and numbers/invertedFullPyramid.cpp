/*
* * * * *
 * * * *
  * * *
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
        int stars=n-i;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}