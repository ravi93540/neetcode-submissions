class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()==0)
        return b;
        if(b.size()==0)
        return a;
        int n=a.size();
        int m=b.size();
        int i=n-1,j=m-1;
        string ans="";
        int carry=0;
        while(i>=0 || j>=0||carry>0)
        {
            int sum=carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        ans += (sum % 2) + '0';   
        carry = sum / 2;          
        }
   reverse(ans.begin(),ans.end());
return ans;
    }
};