class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int ans=INT_MAX,sum=0,j=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
      sum=sum+nums[i];
      if(sum>=target)
      {
        while(sum>=target)
        {
          ans=min(ans,i-j+1);
          sum=sum-nums[j];
          j++;
        }
        
        cout<<ans<<" ";
      }
    }
    if(ans!=INT_MAX)
    return ans;
    return 0;
    
    }
};