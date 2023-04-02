#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <math.h>

using namespace std;

void returnsquares(vector<int>& v) {
    vector<int> ans;
    int leftptr = 0;
    int rightptr = v.size() - 1;
    while (leftptr <= rightptr) {
        if (abs(v[leftptr]) < abs(v[rightptr])) {
            ans.push_back(v[rightptr] * v[rightptr]);
            rightptr--;
        } else {
            ans.push_back(v[leftptr] * v[leftptr]);
            leftptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\t";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> mehta(n);
    for (int i = 0; i < mehta.size(); i++) {
        cin >> mehta[i];
    }
    returnsquares(mehta);
    return 0;
}
