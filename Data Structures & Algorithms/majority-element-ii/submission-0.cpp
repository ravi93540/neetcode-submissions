class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> res{};
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if(itr->second>(n/3))
            res.push_back(itr->first);
        }
        return res;
    }
};