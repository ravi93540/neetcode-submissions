class Solution {
public:
bool isCycle(vector<vector<int>>&adj,int it,int parent,vector<int>&visited)
{
    visited[it]=1;
    for(auto neigh:adj[it])
    {
        if(visited[neigh]==0)
        {
            if(isCycle(adj,neigh,it,visited))
            return true;
        }
        else
        {
            if(neigh!=parent)
            return true;
        }
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>> adj(n+1);
        vector<int> visited(n+1,0);
        for(int i=0;i<n;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            if(isCycle(adj,edges[0][0],-1,visited))
            return edges[i];
            else
            {
                for(int i=1;i<=n;i++)
                visited[i]=0;
            }
        }
        return {};
    }
};
