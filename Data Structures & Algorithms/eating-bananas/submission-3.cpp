class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int t=1,l=piles[piles.size()-1];
        int ans=l;
       
        while(t<=l)
        {
            int mid=t+(l-t)/2;
            //int i=piles[mid];
            int sum=0;
            for(int j=0;j<piles.size();j++)
            {
                int mod=piles[j]%mid;
                int quot=piles[j]/mid;
                if(mod==0)
                {
                    sum=sum+quot;
                }
                else
                {
                    sum=sum+quot+1;
                   
                }
                 cout<<sum<<" ";
            }
            
             if(sum<=h)
            {
                ans=mid;
                l=mid-1;
            }
            else
            t=mid+1;
        }
      return ans;
    }
};
