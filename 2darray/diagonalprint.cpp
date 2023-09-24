
#include <iostream>
#include<limits.h>
using namespace std;

void printArrayDiagonal(int arr[][3],int row,int col){

for (int i=0;i<row;i++)

{
    for (int j=0;j<col;j++){
       if (i+j==2)
    {
        cout<<arr[i][j]<<" ";
    }

    }
    
}
}
int main () {
    int arr[][3]={

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
int row =3;
int col=4;
printArrayDiagonal(arr,row,col);

return 0;
  }