class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt=0,ans=0;
       if(nums.size()==1)
       return nums[0];
       for(int i=0;i<nums.size();i++)
       {
        if(cnt==0)
        {
            ans=nums[i];
            cnt=1;
        }
       else  if(nums[i]==ans)
        {
            cnt++;
        }
        else
        cnt--;

       }
       return ans;
    }
};