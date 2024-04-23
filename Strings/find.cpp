#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
int found (string &str1,string &str2 ){
  int n=str1.length();
  int m=str2.length();
  for (int i=0;i<=n-m;i++){
        bool found=true;
    for (int j=0;j<m;j++){
      if (str1[i+j]!=str2[j]){
          found=false;
          break;

      }

    }
    if (found) return i;
    
  }
  return -1;
}
int main () {
    string str1="hello ansh";
    string str2="ansh";
    int index=found(str1,str2);
    cout<<"found at "<<index<<endl;
return 0;
  }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include<string>
// using namespace std;
// int find(const std::string& str, const std::string& substr, int start = 0) {
//     int n = str.length();
//     int m = substr.length();

//     for (int i = start; i <= n - m; ++i) {
//         bool found = true;
//         for (int j = 0; j < m; ++j) {
//             if (str[i + j] != substr[j]) {
//                 found = false;
//                 break;
//             }
//         }
//         if (found) {
//             return i;  // Return the starting index of the found substring
//         }
//     }
//     return -1;  // Return -1 if the substring is not found
// }

// int main() {
//     std::string str = "Hello, world!";
//     std::string substr = "world";

//     int index = find(str, substr);

//     if (index != -1) {
//         std::cout << "Substring found at index: " << index << std::endl;
//     } else {
//         std::cout << "Substring not found." << std::endl;
//     }

//     return 0;
// }
