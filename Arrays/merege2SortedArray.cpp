// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// void merge (int arr1[],int size1,int arr2[], int size2 ,int arr3[]){
// int k=0;
// int i=0;
// int j=0;
//    while (i<size1 && j<size2) {
//     if (arr1[i]>arr2[j]){
//       arr3[k]=arr2[j];
//       j++;
//       k++;
//     }
//     else {
//        arr3[k]=arr1[i];
//        i++;
//        k++;
//     }

// }
//    while (i<size1){
//     arr3[k]=arr1[i];
//     i++;
//     k++;
//     }
//     while (j<size2){
//     arr3[k]=arr1[j];
//     j++;
//     k++;
//     }
// }
// int main () {
//     int arr1[]={2,4,8,11,14};
//     int arr2[]={1,3,9};
//     int arr3[8]={0};
//     merge(arr1,5,arr2,3,arr3);

//     for (int i: arr3){
//         cout<<i<< " ";
//     }
    

// return 0;
//   }


  


#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {

    //Declare 2 pointers:
    int left = n - 1;
    int right = 0;

    //Swap the elements until arr1[left] is
    // smaller than arr2[right]:
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    // Sort arr1[] and arr2[] individually:
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

