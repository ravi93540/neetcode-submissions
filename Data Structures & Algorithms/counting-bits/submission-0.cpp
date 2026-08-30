class Solution {
public:
    int fun(int n)
    {
        int cnt=0;
        while(n!=0)
        {
            if(n&1==1)
            cnt++;
            n=n>>1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            int temp=fun(i);
            ans.push_back(temp);
        }
        return ans;
    }
};
