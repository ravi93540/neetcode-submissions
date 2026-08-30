class Solution {
public:
    string convertToTitle(int columnNumber) {
      string ans="";
      while(columnNumber>0)
      {
        columnNumber--;
        int x=columnNumber%26;
        ans+='A'+x;
        columnNumber=columnNumber/26;
      }
      reverse(ans.begin(),ans.end());
      return ans;
        
    }
};