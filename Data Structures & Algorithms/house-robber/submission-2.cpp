class Solution {
public:
int fun(int i,vector<int> &nums,int n,vector<int> &dp)
{
    if(i>=n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int left=0,right=0;
    left=left+nums[i]+fun(i+2,nums,n,dp);
    right=right+fun(i+1,nums,n,dp);
    return dp[i]=max(left,right);
}
    int rob(vector<int>& nums) {
    
     int n=nums.size();
     vector<int> dp(n+1,-1);
     return fun(0,nums,n,dp);
     
    }
};
