class Solution {
public:
int xt[4]={0,0,1,-1};
int yt[4]={1,-1,0,0};
void dfs(vector<vector<int>> &heights,vector<vector<int>> &visited,int prevHeight,int i,int j,int n,int m)
{
    if(i<0 || i>=n || j<0 || j>=m || visited[i][j]==1 || heights[i][j]<prevHeight)
    return;
    visited[i][j]=1;
    for(int t=0;t<4;t++)
    {
        dfs(heights,visited,heights[i][j],i+xt[t],j+yt[t],n,m);
    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> pacific(n,vector<int>(m,0));
        vector<vector<int>> atlantic(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            dfs(heights,pacific,heights[i][0],i,0,n,m);
            dfs(heights,atlantic,heights[i][m-1],i,m-1,n,m);
        }
         for(int i=0;i<m;i++)
        {
            dfs(heights,pacific,heights[0][i],0,i,n,m);
            dfs(heights,atlantic,heights[n-1][i],n-1,i,n,m);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(pacific[i][j]==1 && atlantic[i][j]==1)
                ans.push_back({i,j});
            }
        }
        return ans;
    }
};
