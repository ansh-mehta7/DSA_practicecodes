#include <iostream>
using namespace std;
int searchNearlySorted(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid + 1 < n && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            //   s=mid+2;
            s = mid + 1;
        }
        else
        {
            // e=mid-2;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 50;
    int targetIndex = searchNearlySorted(arr, n, target);
    if (targetIndex == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found at " << targetIndex << endl;
    }
    return 0;
}