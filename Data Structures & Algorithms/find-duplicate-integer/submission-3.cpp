class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_set<int> se;
       for(int num:nums)
       {
        if(se.count(num))
        return num;
        else
        {
            se.insert(num);
        }
       }
       return -1;
        
    }
};
