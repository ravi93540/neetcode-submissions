class Solution {
public:
int fun(vector<int>&nums,int i,int sum,int target,vector<vector<int>> &dp,int totalsum)
{
    if(i>=nums.size())
    {
         if(sum==target)
         return 1;
         else
         return 0;
    }
    int temp=sum+totalsum;
    if(dp[temp][i]!=-1)
    return dp[temp][i];
    int lh=fun(nums,i+1,sum+nums[i],target,dp,totalsum);
    int rh=fun(nums,i+1,sum-nums[i],target,dp,totalsum);
    return dp[temp][i]=lh+rh;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalsum=0;
        for(int num:nums)
        totalsum+=num;
        if(abs(target)>totalsum)
        return 0;
        vector<vector<int>> dp(2*totalsum+1,vector<int>(n,-1));
        return fun(nums,0,0,target,dp,totalsum);
    }
};
