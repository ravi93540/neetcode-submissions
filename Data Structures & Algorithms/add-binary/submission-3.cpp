class Solution {
public:
    string addBinary(string a, string b) {
      int carry=0;
      int n=a.size();
      int m=b.size();
      int i=n-1,j=m-1;
      string ans="";
      while(carry!=0 || i>=0 || j>=0)
      {
        int sum=0;
        if(i>=0)
        sum+=a[i--]-'0';
        if(j>=0)
        sum+=b[j--]-'0';
        sum+=carry;
        if(sum==0)
        {
          ans+="0";
          carry=0;
        }
        else if(sum==1)
        {
           ans+="1";
          carry=0;
        }
        else if(sum==2)
        {
           ans+="0";
          carry=1;
        }
        else
        {
           ans+="1";
          carry=1;
        }
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};