class Solution {
public:
void fun(int i,vector<int>&nums,vector<int> &temp,vector<vector<int>>&ans)
{
    if(i>=nums.size())
    {
        if(find(ans.begin(),ans.end(),temp)==ans.end())
        ans.push_back(temp);
        return;
    }
    fun(i+1,nums,temp,ans);
    temp.push_back(nums[i]);
    fun(i+1,nums,temp,ans);
    temp.pop_back();

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        fun(0,nums,temp,ans);
        return ans;
    }
};
