class Solution {
private:
   int fun(int i,int j,vector<vector<int>>& grid,  vector<vector<int>> &visited,int n,int m)
   {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)
        return 1;
        if(visited[i][j]==1)
        return 0;
        visited[i][j]=1;
        int a=fun(i+1,j,grid,visited,n,m);
        int b=fun(i,j+1,grid,visited,n,m);
        int c=fun(i,j-1,grid,visited,n,m);
        int d=fun(i-1,j,grid,visited,n,m);
        return a+b+c+d;
   }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return fun(i,j,grid,visited,n,m);
                }
            }
        }
        return -1;
    }
};