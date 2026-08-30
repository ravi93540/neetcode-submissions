class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        // Fix sizing: 0 to numCourses-1
        vector<vector<int>> adj(numCourses);
        // Note: graph direction should match prerequisite requirement
        // If [u, v] means u must be taken before v, then u -> v
        for(int i=0; i<prerequisites.size(); i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        vector<int> indegree(numCourses, 0);
        for(int i=0; i<adj.size(); i++)
        {
            for(auto it: adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++)
        {
            if(indegree[i] == 0)
                q.push(i);
        }

        // 2D table: isPrereq[u][v] is true if u is a prerequisite of v
        vector<vector<bool>> isPrereq(numCourses, vector<bool>(numCourses, false));

        while(!q.empty())
        {
            int te = q.front();
            q.pop();
            
            for(auto it : adj[te])
            {
                // te is a direct prerequisite of it
                isPrereq[te][it] = true;
                
                // Any prerequisite of te is also a prerequisite of it
                for(int p = 0; p < numCourses; p++) {
                    if(isPrereq[p][te]) {
                        isPrereq[p][it] = true;
                    }
                }

                indegree[it]--;
                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }

        // Answer each query in O(1) time
        vector<bool> ans;
        for(int i = 0; i < queries.size(); i++) {
            int u = queries[i][0];
            int v = queries[i][1];
            ans.push_back(isPrereq[u][v]);
        }
        
        return ans;
    }
};