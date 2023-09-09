#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        //  swap(arr[s++],arr[e--]);

        arr[s] ^= arr[e];
        arr[e] ^= arr[s];
        arr[s] ^= arr[e];

        s++;
        e--;
    }
} 

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int sample[5];
    inputArray(sample, 5);
    printArray(sample, 5);
    reverseArray(sample, 5);
    printArray(sample, 5);
    return 0;
}