class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        int left=0,right=0;
        int ans=0;
        while(right<s.size())
        {
            if(!se.count(s[right]))
            {
                se.insert(s[right]);
                
                ans=max(ans,right-left+1);
                right++;
            }
            else
            {
                
                    se.erase(s[left]);
                    left++;
                
            }
        }
        return ans;
    }

};
