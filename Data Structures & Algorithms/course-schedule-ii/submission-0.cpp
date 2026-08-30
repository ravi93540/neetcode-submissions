class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adj(numCourses+1);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        vector<int> indegree(numCourses+1,0);
        for(int i=0;i<adj.size();i++)
        {
            for(auto it: adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        vector<int> temp;
        while(!q.empty())
        {
            int te=q.front();
            q.pop();
            temp.push_back(te);
            for(auto it:adj[te])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    q.push(it);
                }

            }
        }
            
        if(temp.size()==numCourses)
        return temp;
        else
        return {};
    }
};
