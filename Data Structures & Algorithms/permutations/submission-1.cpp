class Solution {
public:
vector<vector<int>> ans;
void fun(vector<int>& nums,vector<int> &visited,vector<int>&temp)
{
    if(temp.size()==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            temp.push_back(nums[i]);
            fun(nums,visited,temp);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> visited(n,0);
        vector<int> temp;
        fun(nums,visited,temp);
        return ans;
    }
};
