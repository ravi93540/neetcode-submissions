class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int ans=0,cnt=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if( (nums[i+1]-nums[i])==1)
            cnt++;
            else if((nums[i+1]-nums[i])==0 )
            continue;
            else
            {
                ans=max(ans,cnt);
                cnt=1;
            }
        }
         ans=max(ans,cnt);
     
        return ans;
       
    }
};
