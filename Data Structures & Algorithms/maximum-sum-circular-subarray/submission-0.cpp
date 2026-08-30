class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=0;j<nums.size();j++)
            {
                sum=sum+nums[(i+j)%nums.size()];
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};