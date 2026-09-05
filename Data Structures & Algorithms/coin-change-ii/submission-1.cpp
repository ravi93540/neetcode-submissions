class Solution {
public:
int fun(vector<int> &coins,int i,int amount,int sum, vector<vector<int>>& dp)
{
     if(sum==amount)
    return 1;
    if(sum>amount || i>=coins.size())
    return 0;
    
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    int lh=fun(coins,i,amount,sum+coins[i],dp);

    int rh=fun(coins,i+1,amount,sum,dp);
    return dp[i][sum]=lh+rh;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return fun(coins,0,amount,0,dp);
    }
};
