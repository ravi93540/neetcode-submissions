class Solution {
public:
void fun(int i,vector<vector<int>>& ans,vector<int> temp,int n,vector<int> &nums)
{
    if(i>=n)
    {
        ans.push_back(temp);
        return;
    }
    fun(i+1,ans,temp,n,nums);
    temp.push_back(nums[i]);
    fun(i+1,ans,temp,n,nums);
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> temp;
        fun(0,ans,temp,nums.size(),nums);
        return ans;
    }
};
