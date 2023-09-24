#include <iostream>
#include<limits.h>
using namespace std;

int findmax(int arr[][4],int row ,int col ){
int max =INT_MIN;
for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        if (arr[i][j]>max){
            max=arr[i][j];
        }
    }
}
return max;
}

void printArrayColWise(int arr[][4],int row,int col){

for (int i=0;i<col;i++)

{
    for (int j=0;j<row;j++)
    {
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
}
int main () {
    int arr[][4]={

        {1,2,3,10},
        {4,5,6,20},
        {7,8,9,30}
    };
int row =3;
int col=4;
printArrayColWise(arr,row,col);
cout<<findmax(arr,row,col);
return 0;
  }
