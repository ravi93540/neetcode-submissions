class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int n=temperatures.size();
        for(int i=0;i<n-1;i++)
        {
            int temp=temperatures[i];
            int cnt_greater=0,cnt_smaller=0;
            for(int j=i+1;j<n;j++)
            {
                if(temperatures[j]<=temp)
                {
                    cnt_smaller++;
                }
                else
                {
                    cnt_greater++;
                    ans.push_back(cnt_greater+cnt_smaller);
                    break;
                }
                if(j==n-1)
                {
                    if(cnt_greater==0)
                    ans.push_back(0);
                }
            }
        }
       // int te=ans.size();
      //  for(int i=te;i<n;i++)
        ans.push_back(0);
        return ans;
    }
};
