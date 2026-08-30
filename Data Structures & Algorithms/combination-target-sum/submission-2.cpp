class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int> temp,int sum,int target,int i,vector<int>&nums)
    {
      
        if(sum==target)
        {
          ans.push_back(temp);
          return;
        }
        if(i>=nums.size())
      return;
        if(sum>target)
        return;
        sum=sum+nums[i];
        temp.push_back(nums[i]);
        fun(temp,sum,target,i,nums);
        sum=sum-nums[i];
        temp.pop_back();
        fun(temp,sum,target,i+1,nums);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
      fun(temp,0,target,0,nums);
      return ans;

    }
};
