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
int lastOcurrence(int arr[], int n, int target)
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
            s=mid+1;  
        
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
int totalOcurrence (int arr[],int n ,int target){
    int firstoc=firstOcurrence(arr,n,target);
    int lastsoc=lastOcurrence(arr,n,target);
    if (firstoc ==-1&& lastsoc==-1){
        return -1;
    }
    int finalans=lastsoc-firstoc+1;

    return finalans;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 80, 90};
    int ans= totalOcurrence (arr,9,30);
    cout<<"toal occ is "<<ans<<endl;

}
