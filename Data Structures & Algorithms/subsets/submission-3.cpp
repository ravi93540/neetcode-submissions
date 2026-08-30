class Solution {
public:
  vector<vector<int>> ans;
  void fun(int i,vector<int> &temp,vector<int> &nums)
  {
    if(i>=nums.size())
    {
      ans.push_back(temp);
      return;
    }
    fun(i+1,temp,nums);
    temp.push_back(nums[i]);
    fun(i+1,temp,nums);
    temp.pop_back();
  }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> temp;
    fun(0,temp,nums);
    return ans;
    }
};
