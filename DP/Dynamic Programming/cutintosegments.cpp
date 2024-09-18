
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int recursionbased(int n, int x, int y, int z){
        // bc
        if(n==0) return 0;
        if(n<0) return INT_MIN;
        int ans1=1+recursionbased(n-x,x,y,z);
        int ans2=1+recursionbased(n-y,x,y,z);
        int ans3=1+recursionbased(n-z,x,y,z);
        int ans=max(ans1,max(ans2,ans3));
        return ans;
    }
    
    int memoisation(int n, int x, int y, int z,vector<int>&dp){
        
         // bc
        if(n==0) return 0;
        if(n<0) return INT_MIN;
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int ans1=1+memoisation(n-x,x,y,z,dp);
        int ans2=1+memoisation(n-y,x,y,z,dp);
        int ans3=1+memoisation(n-z,x,y,z,dp);
        dp[n]=max(ans1,max(ans2,ans3));
        return dp[n];
        
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        // create a dp array 
        vector<int>dp(n+1,-1);
        int ans=memoisation( n,  x,  y,  z,dp);
        cout<<ans<<endl;
        return ans<0? 0:ans;
        
    }
    
};


int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
