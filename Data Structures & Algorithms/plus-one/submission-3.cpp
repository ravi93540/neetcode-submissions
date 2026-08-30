class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       if(digits[n-1]!=9)
       {
        digits[n-1]++;
        return digits;
       }
       string str="";
       for(int i=0;i<n;i++)
       {
        str+=digits[i]+'0';
       }
       long long  te=stoll(str);
       te=te+1;
       vector<int> ans;
       while(te)
       {
        int mod=te%10;
        ans.push_back(mod);
        te=te/10;       
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
