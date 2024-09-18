#include <iostream>
#include <vector>

using namespace std;

int findStartingPoint(vector<int> petrol, vector<int> distance) {
    int n = petrol.size();
    
    // Check for each petrol pump as starting point
    for (int start = 0; start < n; start++) {
        int curr_petrol = 0;
        bool canComplete = true;
        
        // Try to complete the tour starting from 'start'
        for (int i = 0; i < n; i++) {
            int index = (start + i) % n;
            curr_petrol += petrol[index] - distance[index];
            
            if (curr_petrol < 0) {
                canComplete = false;
                break;
            }
        }
        
        if (canComplete) {
            return start;
        }
    }
    
    return -1;  // No solution found
}

int main() {
    int N1 = 4;
    vector<int> petrol1 = {4, 6, 7, 4};
    vector<int> distance1 = {6, 5, 3, 5};
    
    cout << "Output for Example 1: " << findStartingPoint(petrol1, distance1) << endl;
    
    return 0;
}
