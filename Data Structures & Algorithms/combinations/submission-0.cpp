class Solution {
public:
void fun(int n,vector<vector<int>>& ans,vector<int>& temp,int k,int *visited,int idx)
{
    if(k==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<=n;i++)
    {
       if(visited[i]==0)
        {
            visited[i]=1;
            temp.push_back(i);
            k=k-1;
            fun(n,ans,temp,k,visited,i+1);
            visited[i]=0;
            temp.pop_back();
            k=k+1;
        }
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        int visited[n+1]={0};
        fun(n,ans,temp,k,visited,1);
        return ans;
    }
};