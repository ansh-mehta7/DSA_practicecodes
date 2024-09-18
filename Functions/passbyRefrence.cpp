// #include <iostream>
// using namespace std;
// void solve (int &a){
//     a++;
//     cout<<a<<endl;
// }
// int main () {
//     int a=5;
//     solve (a);
//     cout<<a<<endl;
// return 0;
//   }

  #include <iostream>
  using namespace std;
  void solve (int arr[],int size){
    arr[0]=100;

  }
  int main () {
    int arr[]={1,2,4};
    int size=3;
    solve (arr,3);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
  return 0;
    }