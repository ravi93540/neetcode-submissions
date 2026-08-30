class Twitter {
public:
int time;
unordered_map<int,unordered_set<int>> followingList;
unordered_map<int,vector<pair<int,int>>> post;
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
       
        post[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq;

        for(auto it:followingList[userId])
        {
          const auto& v=post[it];
          for(int i=0;i<v.size();i++)
          {
            pq.push({v[i].first,v[i].second});
          }
        }

      const auto&  temp=post[userId];
        for(int i=0;i<temp.size();i++)
          {
            pq.push({temp[i].first,temp[i].second});
          }
vector<int> ans;
for(int i=0;i<10;i++)
{
  if(!pq.empty())
  {
   ans.push_back(pq.top().second);
    pq.pop();
  }
  else
  break;
}
return ans;

    }
    
    void follow(int followerId, int followeeId) {
      if (followerId != followeeId) {
            followingList[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
      if (followingList.find(followerId) != followingList.end()) {
            followingList[followerId].erase(followeeId);
        }
    }
};
