class Solution {
public:
void fun(vector<vector<int>>& ans,vector<int>&temp,int visited[],int n,vector<int>& nums)
{
    if(temp.size()==n)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            temp.push_back(nums[i]);
            fun(ans,temp,visited,n,nums);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int visited[n+1]={0};
        vector<int> temp;
        fun(ans,temp,visited,n,nums);
        return ans;
    }
};
