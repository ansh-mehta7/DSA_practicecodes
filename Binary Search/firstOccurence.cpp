#include <iostream>
using namespace std;
int firstOcurrence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s+ (e-s)/2;
    int ans=-1; // if element not found 
    while (s <= e)
    {

        if (arr[mid] == target)
        {   
            ans  =mid;
            e=mid-1;  
        
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }

        else if (arr[mid] < target)
        {

            s = mid + 1;
        } 
        mid = s+ (e-s) / 2; 
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 80, 90};
    int index = firstOcurrence(arr,9,40);
    if (index == -1)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << " element found first  at index " << index << endl;
    }
    return 0;
}