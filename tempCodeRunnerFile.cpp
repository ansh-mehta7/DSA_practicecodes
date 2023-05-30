#include <bits/stdc++.h> 

using namespace std;

int firstoccurence(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int rightoccurence(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans; 
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key) {
    pair<int, int> p;

    p.first = firstoccurence(arr, n, key);
    p.second = rightoccurence(arr, n, key);

    return p;
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int key = 3;

    pair<int, int> result = firstAndLastPosition(arr, arr.size(), key);
    cout << "First occurrence: " << result.first << endl;
    cout << "Last occurrence: " << result.second << endl;

    return 0;
}
