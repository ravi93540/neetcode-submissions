class Solution {
public:
int fun(vector<int> &nums,int i,int ans)
{
    if(i>=nums.size())
    {
       return ans;
    }
   return fun(nums,i+1,ans^nums[i])+fun(nums,i+1,ans);


}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
      return fun(nums,0,0);
       
    }
};