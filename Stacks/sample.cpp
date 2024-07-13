#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

void nextgreater(int arr[], int n, vector<int> &temp) {
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--) {
        int price=arr[i];
        while( !st.empty() && price>=st.top()   ){
                st.pop();
            }
            if(st.empty()){
                    temp[i]=-1;
                    st.push(price);
                }
           else { temp[i]=st.top();
            st.push(price);}
        }
}

int main() {
    int arr[5] = {8, 4, 6, 2, 3};
    int size = 5;

    vector<int> temp(size, -1);
    nextgreater(arr, size, temp);

    cout << "Next Greater Element: ";
    for (auto i : temp) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
