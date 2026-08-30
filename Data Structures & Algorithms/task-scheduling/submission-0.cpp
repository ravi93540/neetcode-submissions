class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        priority_queue<int> pq;
        for(char c:tasks)
        freq[c-'A']++;

        for(int num:freq)
        {
          if(num>0)
          pq.push(num);         
        }
        int time=0;
        queue<pair<int,int>> q;
        while(!pq.empty()||!q.empty())
        {
          time++;
          if(!pq.empty())
          {
            int temp=pq.top();
            pq.pop();
            temp--;
            if(temp>0)
            q.push({temp,time+n});
          }
          else
          {
             time=q.front().second;
          }
        if(!q.empty() && q.front().second==time)
        {
          pq.push({q.front().first});
          q.pop();
        }
        }
        return time;
    }
};
