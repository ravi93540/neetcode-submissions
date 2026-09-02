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
     if(n==0)
     return 0;
     if(n==1)
     return nums[0];


     vector<int> dp(n+1,0);
     dp[0]=nums[0];
     dp[1]=max(nums[0],nums[1]);
     for(int i=2;i<n;i++)
     {
        dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
     }
     return dp[n-1];
     
     //return fun(0,nums,n,dp);
     
    }
};
