#include<iostream>
using namespace std;
bool checkevenodd(int n ){
    if (n&1==0){
        return  true;
    }
    else {
        return false;
    }
}

void setithBit(int n,int i){
    int mask=1<<i;
     n=n|mask;
    cout<<"after setting bit "<<n<<endl;
}

void clearithbit(int n ,int i){
    int mask=~(1<<i);
    n=n&mask;
    cout<<"after clearing bit "<<n<<endl;

}
void updateithbit(int &n ,int i,int target){
    // clear ith bit 
    clearithbit(n,i);
    int mask=target<<i;
    n=n|mask;
    cout<<"after updating bit "<<n<<endl;
}
void clearlastibits(int n,int i){
    int mask=(-1<<i);
    n=n&mask;
    cout<<"after clearing last i bits "<<n<<endl;

}
void checkpowerof2(int n){
    if (n&(n-1)==0){
        cout<<"power of 2"<<endl;
    }
    else {
        cout<<"not power of 2"<<endl;
    }
}
int main(){
int n=19;
cout<<checkevenodd(n);
setithBit(5,1);
clearithbit(5,2);
updateithbit(10,2,1);
return  0;
}