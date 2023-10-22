#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// make a function which will check  possiblitlty of failure 


//1. path close ho 
// 2. array ki boundry pe hu mtalab out of bound 
//3. also one case of infinite loop 
bool isSafe (int maze [][4],int srx,int sry,int newx,int newy,int row ,int col,vector <vector<bool>> &visited)

{
if (maze[newx][newy]==1 &&
newx>=0 && newx<row &&
newy>=0 && newy<col &&
 visited[newx][newy]==false){
    return true;

 }
 else {
    return false ;

 }

}
void printAllPath (int maze[][4], int row ,int col,int srx,int sry,string &output, vector<vector<bool>> &visited){

// base case 
//destination coordinates are row-1 and col-1
if (srx==row-1 && sry==col-1){
    cout<<output<<endl;
    return;
}


// up 
int newx=srx-1;
int newy=sry;
if (isSafe (maze,srx,sry,newx,newy,row ,col,visited)){
    // mark visited 
    visited[newx][newy]=true;

    // call recursion
    output.push_back('u');
printAllPath(maze,row,col,srx-1,sry,output ,visited);
    // backtracking 
    output.pop_back();
    visited[newx][newy]=false;
}


// down 
newx=srx+1;
 newy=sry;
if (isSafe (maze,srx,sry,newx,newy,row ,col,visited)){
        // mark visited 
    visited[newx][newy]=true;

    // call recursion 
     output.push_back('d');
printAllPath(maze,row,col,newx,newy,output ,visited);
    // backtracking 
     output.pop_back();
    visited[newx][newy]=false;
}


//left
newx=srx;
 newy=sry-1;
if (isSafe (maze,srx,sry,newx,newy,row ,col,visited)){
   // mark visited 
    visited[newx][newy]=true;

    // call recursion 
     output.push_back('l');
printAllPath(maze,row,col,newx,newy,output ,visited);
    // backtracking 
     output.pop_back();
    visited[newx][newy]=false;
}


//right 
newx=srx;
 newy=sry+1;
if (isSafe (maze,srx,sry,newx,newy,row ,col,visited)){
    // mark visited 
    visited[newx][newy]=true;

    // call recursion 
     output.push_back('r');
printAllPath(maze,row,col,newx,newy,output ,visited);
    // backtracking 
     output.pop_back();
    visited[newx][newy]=false;  
}

}
int main () {
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row =4;
     int col=4;
     int srx=0;
     int sry=0;
     string output ="";
  vector<vector<bool>> visited(row,vector<bool>(col,false ));
  if (maze[0][0]==0){
    cout<<" no path exists"<<endl;

  }
     else {
        visited[srx][sry]=true;

        printAllPath(maze,row,col,srx,sry,output,visited);
     }

return 0;
  }