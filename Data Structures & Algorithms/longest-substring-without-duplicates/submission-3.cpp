class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==" ")
        return 1;
        unordered_set<char> se;
        int i=0,j=0,ans=0;
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
