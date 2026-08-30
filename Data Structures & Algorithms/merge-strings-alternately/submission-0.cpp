class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp;
        int m=word1.size();
        int n=word2.size();
        int i=0,j=0;
        int cnt=0;
        while(i<m && j<n) 
        {
            if(cnt%2==0)
            {
                temp=temp+word1[i];
                i++;
            }
            else
            {
                temp=temp+word2[j];
                j++;
            }
            cnt++;
        }
        if(i<m)
        {
            for(int k=i;k<m;k++)
            temp=temp+word1[k];
        }
        if(j<n)
        {
        for(int k=j;k<n;k++)
            temp=temp+word2[k];
        }
        return temp;
    }
};