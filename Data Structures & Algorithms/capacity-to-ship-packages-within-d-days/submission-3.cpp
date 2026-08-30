class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       
        int n=weights.size();
        int sum=0;
        int l=INT_MIN;
        for(int i=0;i<n;i++){
        sum=sum+weights[i];
        l=max(l,weights[i]);
        }
        int h=sum;
        int ans=h;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            int temp=0,cnt=1;
            for(int i=0;i<n;i++)
            {
                if(temp+weights[i]>mid)
                {
                    cnt++;
                    temp=0;
                }
                temp=temp+weights[i];
            }
            if(cnt<=days)
            {
                ans=mid;
                h=mid-1;
            }
            else
            l=mid+1;
        }
        return ans;
    }
};