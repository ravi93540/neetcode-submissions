class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
     vector<int> res(n,1);
     int leftprod=1;
     for(int i=0;i<n;i++)
     {
      res[i]=leftprod;
      cout<<res[i]<<" ";
      leftprod=leftprod*nums[i];
      
     }
     int rightprod=1;
     
     for(int i=n-1;i>=0;i--)
     {
       res[i]=res[i]*rightprod;
      rightprod=rightprod*nums[i];
     
     }
     return res;
    }
};
