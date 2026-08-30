class Solution {
public:
    void fun(int i,int j,int n,int m,vector<vector<char>>& grid)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0')
        return;
        grid[i][j]='0';
        fun(i+1,j,n,m,grid);
         fun(i-1,j,n,m,grid);
          fun(i,j+1,n,m,grid);
           fun(i,j-1,n,m,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    fun(i,j,n,m,grid);
                }
            }
        }
        return ans;
    }
};
