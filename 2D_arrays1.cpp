#include <iostream>
using namespace std;
int main () {
    int r1 ,c1,r2,c2;
    cout<<"enter r1 c1 ";
    cin>>r1>>c1;

    int a[r1][c1];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            cin>>a[i][j];

        }
    }
    cout<<"enter r2 c2 ";
    cin>>r2>>c2;
    int b[r2][c2];
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            cin>>b[i][j];

        }
    }
    if (c1!=r2){
        return -1;
    }
    int c[r1][c2];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            int value=0;
            for (int k=0;k<c1;k++){
 
                value+=a[i][k]*b[k][j];
                c[i][j]=value;

            }
        }
    } 
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout <<endl;

    }
    cout<<endl;
    
    int c_transpose[c2][r1];
    for(int i=0;i<c2;i++){
        for (int j=0;j<r1;j++){
            c_transpose[i][j]=c[j][i];
        }
    }
 for (int i=0;i<c2;i++){
        for (int j=0;j<r1;j++){
            cout<<c_transpose[i][j]<<" ";
        }
        cout <<endl;

    }
return 0;
  }