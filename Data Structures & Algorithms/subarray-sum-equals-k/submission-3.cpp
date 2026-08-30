class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        int sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int diff=sum-k;
            cnt=cnt+mp[diff];
            mp[sum]++;
        }
        return cnt;
    }
};