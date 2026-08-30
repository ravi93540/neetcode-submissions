class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int ans=INT_MAX;
        int i=1,j=piles[piles.size()-1];
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            int hr=0;
            for(int i=0;i<piles.size();i++)
            {
                if(piles[i]/mid==0 )
                hr=hr+1;
                else if(piles[i]%mid==0 && piles[i]/mid==1)
                hr=hr+1;
                else
                {
                    if(piles[i]%mid==0)
                    hr=hr+piles[i]/mid;
                    else
                    hr=hr+1+piles[i]/mid;
                }

            }
            if(hr<=h)
            {
                ans=min(ans,mid);
                j=mid-1;
            }
            else if(hr>h)
            i=mid+1;

            
        }
        return ans;
    }
};
