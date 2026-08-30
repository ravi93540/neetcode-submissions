class Solution {
public:
int cnt=0;
void fun(int i,int j,int n,int m,vector<vector<int>>& grid)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
        return;
        cnt++;
        grid[i][j]=0;
        fun(i+1,j,n,m,grid);
        fun(i-1,j,n,m,grid);
        fun(i,j+1,n,m,grid);
        fun(i,j-1,n,m,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    
                   fun(i,j,n,m,grid);
                   ans=max(ans,cnt);
                   cnt=0;
                }
            }
        }
        return ans;
    }
};
