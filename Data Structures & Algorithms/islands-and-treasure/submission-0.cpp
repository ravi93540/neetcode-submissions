class Solution {
public:
    int xt[4] = {0, 0, 1, -1};
    int yt[4] = {1, -1, 0, 0};

    bool safe(int x, int y, int n, int m) {
        return (x >= 0 && x < n && y >= 0 && y < m);
    }

    int bfs(int i, int j, vector<vector<int>>& grid, int n, int m) {
        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        
        q.push({i, j});
        visited[i][j] = 1;
        
        int dist = 0; // Tracks the actual level/radius of exploration

        while (!q.empty()) {
            int size = q.size(); // Number of elements at the current distance level
            
            // Process ALL elements at the current distance level
            for (int k = 0; k < size; k++) {
                pair<int, int> temp = q.front();
                q.pop();
                
                int xa = temp.first;
                int ya = temp.second;

                // If this popped cell is a gate, we found our shortest distance!
                if (grid[xa][ya] == 0) {
                    return dist;
                }

                for (int t = 0; t < 4; t++) {
                    int xb = xa + xt[t];
                    int yb = ya + yt[t];

                    if (safe(xb, yb, n, m) && visited[xb][yb] == 0) {
                        // We can step into water/gate (0) OR another empty room
                        if (grid[xb][yb] !=-1) {
                            visited[xb][yb] = 1;
                            q.push({xb, yb});
                        }
                    }
                }
            }
            dist++; // Move to the next distance layer
        }
        return 2147483647; // If no gate is reachable, leave it as INF
    }

    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2147483647) {
                    grid[i][j] = bfs(i, j, grid, n, m);
                }
            }
        }
    }
};