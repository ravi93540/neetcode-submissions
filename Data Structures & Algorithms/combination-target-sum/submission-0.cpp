class Solution {
public:
    void fun(int i,int target,vector<int>& nums,int sum,vector<int>& temp,vector<vector<int>> &ans )
    {   
        if(i>=nums.size() || sum>target)
        return;
        if(sum==target)
        {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[i]);
        
        fun(i,target,nums,sum+nums[i],temp,ans);
        //temp.push_back(nums[i]);
      //  sum=sum+nums[i];
      temp.pop_back();
          fun(i+1,target,nums,sum,temp,ans);
         
        //  temp.pop_back();
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        fun(0,target,nums,0,temp,ans);
        return ans;
    }
};
