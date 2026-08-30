class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i:nums)
        {
            s.insert(i);
        }
        int cnt=0;
        while(cnt<nums.size())
        {
            if(!s.count(cnt+1))
            return cnt+1;
            cnt++;
        }
        return cnt+1;

    }
};