class Solution {
public:
int dfs(vector<vector<int>>&adj,int node,int parent)
{
    int hgt=0;
    for( int it:adj[node])
    {
        if(it==parent)
        continue;
        hgt=max(hgt,1+dfs(adj,it,node));
    }
    return hgt;
}
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
       vector<vector<int>> adj(n);

     

       for(int i=0;i<n-1;i++)
       {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
       }

       int minHeight=n;
       vector<int> res;

       for(int i=0;i<n;i++)
       {
        
       int temp=dfs(adj,i,-1);
        if(temp==minHeight)
        {
            res.push_back(i);

        }
        else if(temp<minHeight)
        {
            res={i};
            minHeight=temp;
        }
       }
      return res;
    }
};