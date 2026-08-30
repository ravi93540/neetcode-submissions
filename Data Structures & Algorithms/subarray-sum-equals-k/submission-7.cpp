class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int ans=0,sum=0;
      unordered_map<int,int> mp;
      mp[0]=1;
      for(int num: nums)
      {
        sum+=num;
        int diff=sum-k;
        ans=ans+mp[diff];
        mp[sum]++;
              }
              return ans;
    }
};