class Solution {
public:
    vector<vector<int>> ans;
    void fun(int i,int target,vector<int> &temp,vector<int>&nums)
    {
        if(i>=nums.size())
        {
            if(target==0)
            {
            ans.push_back(temp);
            return;
            }
            return;
        }
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0)
        return;
        temp.push_back(nums[i]);
        fun(i,target-nums[i],temp,nums);
        temp.pop_back();
        fun(i+1,target,temp,nums);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        fun(0,target,temp,nums);
        return ans;

    }
};
