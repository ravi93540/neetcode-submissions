class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
       string ans="";
       string temp=strs[0];
       for(int i=0;i<temp.size();i++)
       {
        char c=temp[i];
          for(int j=1;j<strs.size();j++)
          {
            if(strs[j][i]!=c || i==strs[j].size())
            {
              return temp.substr(0,i);
            }
          }
       }
       return temp;
    }
};