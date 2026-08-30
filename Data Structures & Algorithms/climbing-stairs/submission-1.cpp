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
        return fun(n,dp);
    }
};
