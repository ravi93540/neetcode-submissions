class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                continue;
            }
            else
            {
                nums[idx++]=nums[i];
                s.insert(nums[i]);
            }
        }
        return idx;
    }
};