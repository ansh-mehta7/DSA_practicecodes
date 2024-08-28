#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to manually erase part of the string from 'start' index with 'length' length
    string customErase(string s, int start, int length) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            // Skip the part of the string that needs to be erased
            if (i < start || i >= start + length) {
                result += s[i];
            }
        }
        return result;
    }

    void exampleEraseFunction() {
        string s = "Hello, World!";
        int start = 7;
        int length = 5;

        // Using customErase to remove "World"
        string result = customErase(s, start, length);
        
        cout << "Original String: " << s << endl;
        cout << "After Erase: " << result << endl;
    }
};

int main() {
    Solution solution;
    solution.exampleEraseFunction();
    return 0;
}
