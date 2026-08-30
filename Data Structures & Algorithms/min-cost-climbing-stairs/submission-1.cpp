class Solution {
public:
int fun(vector<int>& cost,int n,int i,vector<int> &dp)
{
    if(i==n-1)
    return cost[i];
    if(i>n-1)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int lh=cost[i]+fun(cost,n,i+1,dp);
    int rh=cost[i]+fun(cost,n,i+2,dp);
    return dp[i]=min(lh,rh);

}
    int minCostClimbingStairs(vector<int>& cost) {
      /*  int a=cost[0];
        int b=cost[1];
        int c=INT_MAX;
        int n=cost.size();
        for(int i=2;i<cost.size();i++)
        {
            if(i+1<n)
        }
        */
        vector<int> dp(cost.size()+1,-1);
        return min(fun(cost,cost.size(),0,dp),fun(cost,cost.size(),1,dp));
    }
};
