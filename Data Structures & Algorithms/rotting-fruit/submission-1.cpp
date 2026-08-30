class Solution {
public:
int xt[4]={0,0,1,-1};
int yt[4]={1,-1,0,0};
bool safe(int i,int j,int n,int m)
{
    return (i>=0 && i<n && j>=0 && j<m);
}
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                cnt++;
            }
        }

    if(cnt==0)
    return 0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
    int time=0;
        while(!q.empty())
        {
            time++;
            int si=q.size();
            for(int i=1;i<=si;i++)
            {
                int xa=q.front().first;
                int ya=q.front().second;
                q.pop();
                for(int t=0;t<4;t++)
                {
                    int xb=xa+xt[t];
                    int yb=ya+yt[t];
                    if(safe(xb,yb,n,m) && grid[xb][yb]==1)
                    {
                        cnt--;
                        grid[xb][yb]=2;
                        if(cnt==0)
                        {
                            return time;
                        }
                        else
                        {
                            q.push({xb,yb});
                        }
                    }
                }

            }
        }
        return -1;
    }
};
