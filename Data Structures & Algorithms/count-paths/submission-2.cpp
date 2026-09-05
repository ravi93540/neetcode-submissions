class Solution {
public:

int fun(int i,int j,int m,int n,vector<vector<int>> &dp)
{
    if(i>=m || j>=n)
    return 0;
    if(i==m-1 && j==n-1)
   return 1;
   if(dp[i][j]!=-1)
   return dp[i][j];
  int lh= fun(i+1,j,m,n,dp);
   int rh= fun(i,j+1,m,n,dp);
   return dp[i][j]=lh+rh;
}
    int uniquePaths(int m, int n) {
        int ans=0;
        vector<vector<int>> dp(m,vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {

                //int lh=0,rh=0;
                if(i==0 && j==0)
                dp[i][j]=1;
                else
                {
                    int lh=(i-1>=0)?dp[i-1][j]:0;
                    int rh=(j-1>=0)?dp[i][j-1]:0;
                    dp[i][j]=lh+rh;
                }
                
            }
        }
        return dp[m-1][n-1];
      //return fun(0,0,m,n,dp);
       //return ans; 
    }
};
