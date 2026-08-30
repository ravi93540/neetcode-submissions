class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> se(nums.begin(),nums.end());
       int ans=0;
        for(int num:nums)
        {
            if(!se.count(num-1))
            {
                int cnt=1;
                
                while(se.count(num+1))
                {
                    num=num+1;
                    cnt++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
