class Solution {
public:

    bool valid(int i,int j,int n,int m)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }

    int fun(vector<vector<int>>&grid,int i,int j,int n,int m,int sum,vector<vector<int>> &dp,int ans)
    {
        if(i==n-1 && j==m-1)
        {
            return grid[i][j];
        }
        if (i >= n || j >= m)
            return INT_MAX;
        if(dp[i][j]!=-1)
        return dp[i][j];
       
        int lh= fun(grid,i+1,j,n,m,sum,dp,ans);
        
       
           int  rh= fun(grid,i,j+1,n,m,sum,dp,ans);
        
          
          return dp[i][j]=grid[i][j]+min(lh,rh);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
       return fun(grid,0,0,n,m,0,dp,INT_MAX);
        
    }
};