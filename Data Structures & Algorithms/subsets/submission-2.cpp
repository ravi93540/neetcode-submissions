class Solution {
public:
  vector<vector<int>> ans;
  void fun(vector<int>& nums,vector<int>& temp,int i)
  {
    if(i>=nums.size())
    {
        ans.push_back(temp);
        return;
    }
     temp.push_back(nums[i]);
    fun(nums,temp,i+1);
   temp.pop_back();
    fun(nums,temp,i+1);
    
  }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int> temp;
fun(nums,temp,0);
return ans;
    }
};
