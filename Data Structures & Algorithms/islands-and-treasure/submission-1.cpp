class Solution {
public:
int xt[4]={0,0,1,-1};
int yt[4]={1,-1,0,0};
bool safe(int i,int j,int n,int m)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                q.push({i,j});
            }
        }

        while(!q.empty())
        {
            int xa=q.front().first;
            int ya=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int xb=xa+xt[i];
                int yb=ya+yt[i];
                if(safe(xb,yb,n,m)&& grid[xb][yb]==2147483647)
                {
                    grid[xb][yb]=grid[xa][ya]+1;
                    q.push({xb,yb});                }
            }
        }

    }
};