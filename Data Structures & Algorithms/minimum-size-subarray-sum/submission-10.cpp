class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int sum=0;
          int j=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
           
            if(sum>=target)
            {
              
                while(sum>=target)
                {
                    sum=sum-nums[j];
                    j++;
                     //cnt++;
                }
                ans=min(ans,i-j+2);
               // cnt=0;
                //sum=0;
            }


        }
  
        if(ans!=INT_MAX)
        return ans;
        else
        return 0;

    }
};