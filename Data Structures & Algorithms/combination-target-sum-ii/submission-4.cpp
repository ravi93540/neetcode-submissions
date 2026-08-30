class Solution {
public:
   vector<vector<int>> ans;
   void fun(int idx,vector<int> temp,vector<int> &nums,int sum,int target)
   {
      if(idx>nums.size())
      return;
      if(sum>target)
      return;
      if(sum==target)
      {
        ans.push_back(temp);
        return;
      }
      for(int i=idx;i<nums.size();i++)
      {
        if(i>idx && nums[i]==nums[i-1])
        continue;
        if(nums[i]>target)
        continue;
        sum+=nums[i];
        temp.push_back(nums[i]);
        fun(i+1,temp,nums,sum,target);
        sum-=nums[i];
        temp.pop_back();

      }
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        fun(0,temp,candidates,0,target);
        return ans;
    }
};