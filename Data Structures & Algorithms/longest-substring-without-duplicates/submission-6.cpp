class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<char> se;
        int j=0,i=0;
        while(j<s.size())
        {
            if(!se.count(s[j]))
            {
                ans=max(ans,j-i+1);
                se.insert(s[j]);
                j++;
            }
            else
            {
                se.erase(s[i]);
                i++;
            }
        }
        return ans;
    }

};
