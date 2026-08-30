class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
       string ans="";
       int i=0,j=0,cnt=0;
       while(i<n && j<m)
       {
        if(cnt%2==0)
        ans=ans+word1[i++];
        else
        ans=ans+word2[j++];
        cnt++;
       }
       while(i<n)
       ans=ans+word1[i++];
       while(j<m)
       ans=ans+word2[j++];
        return ans;
    }
};