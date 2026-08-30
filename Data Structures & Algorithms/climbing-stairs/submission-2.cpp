class Solution {
public:
int fun(int n,vector<int>&dp)
    {
        if(n<=1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];
        int a=fun(n-1,dp);
        int b=fun(n-2,dp);
        return dp[n]=a+b;
    }
    int climbStairs(int n) {
         vector<int> dp(n+1,-1);
         dp[0]=1,dp[1]=1;
         for(int i=2;i<=n;i++)
         {
            dp[i]=dp[i-1]+dp[i-2];
         }
         return dp[n];
        //return fun(n,dp);
    }
};
