#include <iostream>
using namespace std;
void input(int arr[][4],int row ,int col){
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}

}
void printArrayRowWise(int arr[][4],int row,int col){
for (int i=0;i<row;i++){
    // for (int j=0;j<col;j++){
    //     cout<<arr[i][j]<<" ";
    // }
     cout<<arr[i][i]<<" ";
    cout<<endl;
}
}
int main () {
    int arr[3][4];
  
int row =3;
int col=4;
input(arr,row,col);
printArrayRowWise(arr,row,col);
return 0;
  }

