class Solution {
public:
void fun(int i,int target,vector<int>& candidates,int sum,vector<int>& temp,vector<vector<int>> &ans )
    {   
        if(i>=candidates.size() )
        {

        if(sum==target)
        {
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            ans.push_back(temp);
            return;
        }
        return;
        }
       /* if(sum==target)
        {
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            ans.push_back(temp);
            return;
        }
        */
       
        
        fun(i+1,target,candidates,sum,temp,ans);
        //temp.push_back(nums[i]);
      //  sum=sum+nums[i];
       temp.push_back(candidates[i]);
       sum=sum+candidates[i];
      //temp.pop_back();
          fun(i+1,target,candidates,sum,temp,ans);
         
          temp.pop_back();
          sum=sum-candidates[i];
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        fun(0,target,candidates,0,temp,ans);
        return ans;
    }
};
