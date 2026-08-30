class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        string str="";
        int n=digits.size();
        for(int i=0;i<n;i++)
        {
            str+=digits[i]+'0';
        }
        long long x=stoll(str);
        x=x+1;
        while(x>0)
        {
            int mod=x%10;
            ans.push_back(mod);
            x=x/10;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
