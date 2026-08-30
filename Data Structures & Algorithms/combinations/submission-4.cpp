class Solution {
public:
vector<vector<int>> ans;
void fun(int n,int k, vector<int> temp,int idx,vector<int> &visited)
{
    if(temp.size()==k)
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
            fun(n,k,temp,i+1,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<int> visited(n+1,0);
        fun(n,k,temp,1,visited);
        return ans;
    }
};