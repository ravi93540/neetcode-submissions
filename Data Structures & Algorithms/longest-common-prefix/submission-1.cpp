class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string res="";
       sort(strs.begin(),strs.end());
       for(int i=0;i<strs[0].size();i++)
       {
        char c=strs[0][i];
        bool flag=true;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=c)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            res=res+c;
            else
            break;
       }
       return res;
    }
};