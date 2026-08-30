class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int num:nums)
        mp[num]++;

        priority_queue<pair<int,int>> pq;
        for(auto it: mp)
        {
            pq.push({it.second,it.first});
        }
        while(k--)
        {
            if(!pq.empty())
            {
            ans.push_back(pq.top().second);
            pq.pop();
            }
        }
return ans;

    }
};
