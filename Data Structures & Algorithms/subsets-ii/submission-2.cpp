class Solution {
public:
    vector<vector<int>> ans;
    void fun(int idx,vector<int> &temp,vector<int>&nums)
    {
        if(idx>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
       
        temp.push_back(nums[idx]);
        fun(idx+1,temp,nums);
        temp.pop_back();
        while (idx + 1 < nums.size() && nums[idx] == nums[idx + 1]) {
            idx++;
        }
        fun(idx+1,temp,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        fun(0,temp,nums);
        return ans;
    }
};
