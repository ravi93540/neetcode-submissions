class Solution {
public:
int ans=0;
void fun(int i,vector<int> &nums,int sum)
{
  if(i>=nums.size())
  {
    ans+=sum;
    return;
  }
  fun(i+1,nums,sum^nums[i]);
  fun(i+1,nums,sum);
}
    int subsetXORSum(vector<int>& nums) {
       fun(0,nums,0);
return ans;
       
    }
};