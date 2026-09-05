class Solution {
public:
    int fun(vector<vector<int>> &obstacleGrid,int i,int j,vector<vector<int>> &dp)
    {
        if(i>=obstacleGrid.size() || j>=obstacleGrid[0].size()|| obstacleGrid[i][j]==1)
        return 0;
        if(i==obstacleGrid.size()-1 && j==obstacleGrid[0].size()-1)
        return 1;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int lh=fun(obstacleGrid,i+1,j,dp);
        int rh=fun(obstacleGrid,i,j+1,dp);
        return dp[i][j]=lh+rh;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();

        if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1)
        return 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return fun(obstacleGrid,0,0,dp);
    }
};