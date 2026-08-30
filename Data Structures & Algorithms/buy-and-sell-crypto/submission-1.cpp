class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell=0,buy=prices[0];
        int ans=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {

            if(prices[i]>buy)
            {
                sell=prices[i]-buy;
                ans=max(ans,sell);
            }
            else
            {
                buy=prices[i];
            }
        }
        return ans;
    }

};
