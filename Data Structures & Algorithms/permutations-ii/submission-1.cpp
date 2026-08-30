class Solution {
public:
vector<vector<int>> ans;
void fun(vector<int> &temp,vector<int> &nums,vector<int> visited)
{
    if(temp.size()==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(i>0 && nums[i]==nums[i-1] &&!visited[i-1])
        continue;
        if(visited[i]==0)
        {
            
            visited[i]=1;
            temp.push_back(nums[i]);
            fun(temp,nums,visited);
            visited[i]=0;
            temp.pop_back();
            
        }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       int n=nums.size();
       vector<int> visited(n,0);
       vector<int> temp;
       sort(nums.begin(),nums.end());
       fun(temp,nums,visited);
       return ans;
    

    }
};