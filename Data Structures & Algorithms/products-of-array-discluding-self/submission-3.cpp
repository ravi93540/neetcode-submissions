class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
     vector<int> ans(n,1);
     int leftprod=1;
     for(int i=0;i<nums.size();i++)
     {
       ans[i]=leftprod;
      leftprod=leftprod*nums[i];
     
     }
     int rightprod=1;
     for(int i=n-1;i>=0;i--)
     {
      ans[i]=ans[i]*rightprod;
      rightprod=rightprod*nums[i];
     }
     return ans;
    }
};
