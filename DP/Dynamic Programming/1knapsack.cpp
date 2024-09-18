#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int solveUsingRecursion(int capacity, int wt[], int profit[], int index, int n)
{
    //base case
        if (index >= n)
        {

            return 0;
        }
        int include = 0;
    int exclude;

    if (wt[index] <= capacity)
    {
        include = profit[index] + solveUsingRecursion(capacity - wt[index], wt, profit, index + 1, n);
    }
     exclude = 0 + solveUsingRecursion(capacity, wt, profit, index + 1, n);
    int ans = max(include, exclude);
    return ans;
}

void printdpArray(vector<vector<int>> &dp){
    for(int i=0;i<dp.size();i++){
        for (int j=0;j<dp[0].size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}

int solveUsingMem(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>> &dp)
{
     // base case
    if (index >=n)
    {
            return 0;
    }
    if (dp[capacity][index] != -1)
    {
        return dp[capacity][index];
    }
    int include = 0;
    // include exclude

    if (wt[index] <= capacity)
    {
        include = profit[index] + solveUsingMem(capacity - wt[index], wt, profit, index + 1, n, dp);
    }
    int exclude = 0 + solveUsingMem(capacity, wt, profit, index + 1, n, dp);
    dp[capacity][index]= max(include, exclude);
    printdpArray(dp);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    return dp[capacity][index];
}

int solveByTabulation(int capacity, int wt[], int profit[], int index, int n)
{
    vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));
    for (int i=0;i<=capacity;i++){
        dp[i][n]=0;

    } 
    for (int i=0;i<=capacity;i++){
        for (int j=n-1;j>=0;j--){
               int include = 0;
                // include exclude

                if (wt[j] <= i)
                {
                include = profit[j] + dp[i - wt[j]][j + 1];
                }
                int exclude = 0 + dp[i][j+1];
                dp[i][j]= max(include, exclude);
                
        }

    }
    return dp[capacity][0];
    }
     

int solveSpaceOptimimstaion(){
    
}
int main()
{
    

    int capacity = 4;
    int wt[] = {4,5,1};
    int profit[] = {1,2,3};
    int index = 0;
    int n = 3;
    vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));

    // int ans=solveUsingRecursion(capacity,wt,profit,index,n); 
    int ans = solveUsingMem(capacity, wt, profit, index, n, dp);
    // int ans = solveByTabulation(capacity, wt, profit, index, n);
    cout << "max profit " << ans;

    return 0;
}