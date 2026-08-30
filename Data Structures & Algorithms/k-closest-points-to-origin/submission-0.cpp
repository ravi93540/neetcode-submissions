class Solution {
public:
  int fun(int x,int y)
  {
    return (x*x+y*y);
  }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<points.size();i++)
        {
          if(pq.size()<k)
          {
            int temp=fun(points[i][0],points[i][1]);
            pq.push({temp,{points[i][0],points[i][1]}});
          }
          else
          {
            int temp=fun(points[i][0],points[i][1]);
            if(pq.top().first>temp)
            {
              pq.pop();
              pq.push({temp,{points[i][0],points[i][1]}});
            }
            else
            {
              continue;
            }
          }
        }
        while(!pq.empty())
        {
          ans.push_back({pq.top().second.first,pq.top().second.second});
          pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
