class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        int cnt=0;
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<pair<int,int>> q;
        q.push({0,-1});
        vector<int> visited(n+1,0);
        visited[0]=1;
        while(!q.empty())
        {
            pair<int,int> top=q.front();
            q.pop();
            cnt++;
            int x=top.first;
            int parent=top.second;
            for(auto it:adj[x])
            {
                if(visited[it]==0)
                {
                    visited[it]=1;
                     q.push({it,x});
                }
                else
                {
                    if(it!=parent)
                    return false;
                }
            }
        }
        return cnt==n;
    }
};
