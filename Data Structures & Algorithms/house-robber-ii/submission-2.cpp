class Solution {
public:
int fun(int i,vector<int> &nums,int end,vector<int> &dp)
{
    if(i>end)
    return 0;
    int left=0,right=0;
    if(dp[i]!=-1)
    return dp[i];
    left=left+nums[i]+fun(i+2,nums,end,dp);
    right=right+fun(i+1,nums,end,dp);
    return dp[i]=max(left,right);
}
    int rob(vector<int>& nums) {
        
        int n=nums.size();
       
        if(n==1)
        return nums[0];
        vector<int> dp1(n+1,-1);
         vector<int> dp2(n+1,-1);
        int a=fun(0,nums,n-2,dp1);
        int b=fun(1,nums,n-1,dp2);
        return max(a,b);
    }
};
