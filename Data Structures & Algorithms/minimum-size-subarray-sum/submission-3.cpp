class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int n=nums.size();
      int ans=INT_MAX;
      for(int i=0;i<n;i++)
      {
        int sum=0;
        int j=i;
        while(j<n)
        {
           sum=sum+nums[j];
           if(sum>=target)
           {
            ans=min(ans,j-i+1);
            break;
           }
           j++;
        }
      }
      if(ans!=INT_MAX)
      return ans;
      return 0;
    }
};