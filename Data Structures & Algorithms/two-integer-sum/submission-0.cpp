class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i]))
            {
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                return res;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};
