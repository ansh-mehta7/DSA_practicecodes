#include <iostream>
using namespace std;
#include <vector>
void processingfunc(vector<int> &v)
{
  vector<int> prefsum(v.size());
  prefsum[0] = v[0];

  for (int i = 1; i < v.size(); i++)
  {

    prefsum[i] = v[i] + prefsum [i - 1];
  }
  for (int i = 0; i < prefsum.size(); i++)
  {

    cout << prefsum[i] << "\t";
  }
}
int main()
{

  int n;
  cin >> n;
  vector<int> takeinput(n);
  for (int i = 0; i < takeinput.size(); i++)
  {
    cin >> takeinput[i];
  }
  processingfunc(takeinput);
}
// without creating another vector 

#include <iostream>
using namespace std;
#include <vector>
void processingfunc(vector<int> &v)
{

  for (int i = 1; i < v.size(); i++)
  {

    v[i] = v[i] + v[i - 1];
  }
  for (int i = 0; i < v.size(); i++)
  {

    cout << v[i] << "\t";
  }
}
int main()
{

  int n;
  cin >> n;
  vector<int> takeinput(n);
  for (int i = 0; i < takeinput.size(); i++)
  {
    cin >> takeinput[i];
  }
  processingfunc(takeinput);
}

#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate number of
// equal prefix and suffix sums
// till the same indices
int equalSumPreSuf(int arr[], int n) {
    // Calculate prefix sum
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
 
    // Calculate suffix sum
    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }
 
    // Count the number of indices where prefix[i] == suffix[i]
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (prefix[i] == suffix[i]) {
            count++;
        }
    }
 
    return count;
}
 
int main() {
    // Initialize the array
    int arr[] = {5, 0, 4, -1, -3, 0,
                 2, -2, 0, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Call the function and
    // print its result
    cout << (equalSumPreSuf(arr, n));
 
    return 0;
}
#include <iostream>
using namespace std;
#include<vector>
bool prefequalsuffix(vector<int>&v){
 int sum=0;
for (int i=0;i<v.size();i++){
   sum=sum+v[i];

}

   int prefsum=0;

  for (int i = 1; i < v.size(); i++)
  {
int sufsum=0;
    prefsum = v[i] + prefsum;
  sufsum=sum-prefsum;
if(sufsum==prefsum){
  return true;
}
  }

return false ;
}

int main () {
  int n;
   cin>>n ;
    vector<int> input(n);
    for (int i=0;i<input.size();i++){
      cin>>input[i];
    }
    int x=prefequalsuffix(input);
    if (x==1){
cout<<"true\n";

    }
    else {
      cout<<"false ";
    }
return 0;
  }
  
  #include <iostream>
  using namespace std;
  #include<bits/stdc++.h>
  int main () {
    int n ;
     cin >>n ;
      vector <int>sample(n+1, 0);
      for (int i=1;i<=n;i++){
        cin>>sample[i];
      }
for (int j=1;j<=n;j++){
  sample[j]+=sample[j-1];

}
int q; cin>>q;
while (q--){
int l ;
 int r ;
  cin>>l>>r;
  int ans =0;
  ans=sample[r]-sample[l-1];
  cout<<ans;
}
  return 0;
    }
    //0 5 6 9 11 15
    // r=4 l=2=1
    //11-5=6