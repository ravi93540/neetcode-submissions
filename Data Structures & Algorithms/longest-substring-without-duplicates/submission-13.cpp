class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        return 0;
        int ans=1;
        unordered_map<char,int> mp;
        int i=0,j=0;
       while(i<s.size())
       {
        if(mp.count(s[i]))
        {
            ans=max(ans,i-j);
            while(mp.count(s[i]))
            {
                mp.erase(s[j]);
                j++;
            }
        }
        mp[s[i]]=i;
        i++;
        
       }
       ans=max(ans,i-j);
       return ans;
    }

};
