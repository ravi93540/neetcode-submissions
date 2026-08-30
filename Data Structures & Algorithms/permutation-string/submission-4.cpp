class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        vector<int> count_s1(26,0);
        vector<int> count_s2(26,0);
        for(char c:s1)
        {
            count_s1[c-'a']++;
        }
     
    
        int l=s1.size();
        for(int i=0;i<l;i++)
        {
            count_s2[s2[i]-'a']++;   
        }
        if(count_s1==count_s2)
        return true;

        for(int i=l;i<s2.size();i++)
        {
            
            count_s2[s2[i]-'a']++;
            count_s2[s2[i-l]-'a']--;
             if(count_s1==count_s2)
            return true;
        }
        return false;
    }
};