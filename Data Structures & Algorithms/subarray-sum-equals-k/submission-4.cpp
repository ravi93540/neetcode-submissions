class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(sum==k)
                cnt++;
                sum=sum+nums[j];
            }
            if(sum==k)
            cnt++;
        }
        return cnt;
    }
};