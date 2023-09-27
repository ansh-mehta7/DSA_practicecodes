#include <iostream>
using namespace std;
int findMissingElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[0]!=1){
         return 1;
        }
        if (arr[n-1]!=n+1){
            return n+1;
        }
        int diff = arr[mid] - mid;
        if (diff == 1)
        {   ans = mid;
            s = mid + 1;
        }
        else
        {
            // ans = mid;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans+2;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
     cout<<findMissingElement(arr,7);
    return 0;
}