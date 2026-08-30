class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            int diff=sum-k;
            cnt+=mp[diff];
            cout<<mp[diff]<<" ";
            //cout<<cnt<<" ";
            mp[sum]++;
        }
        return cnt;
    }
};