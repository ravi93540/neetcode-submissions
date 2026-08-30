class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        return 0;
        int ans=1;
        unordered_set<char> mp;
        int i=0,j=0;
       while(i<s.size())
       {
        if(!mp.count(s[i]))
        {
            mp.insert(s[i]);
            ans=max(ans,i-j+1);
             i++;
        }
        else
        {
            mp.erase(s[j]);
            j++;
        }
        
        
       }
       ans=max(ans,i-j);
       return ans;
    }

};
