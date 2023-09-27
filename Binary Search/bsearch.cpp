#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s+ (e-s) / 2;
    while (s <= e)
    {

        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int index = binarySearch(arr, 9, 90);
    if (index == -1)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << " element found at index " << index << endl;
    }
    return 0;
}