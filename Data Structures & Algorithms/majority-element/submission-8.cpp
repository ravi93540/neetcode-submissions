class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int cnt=0,ans=0;
     for(int num:nums)
     {
        if(cnt==0)
        {
            ans=num;
            cnt=1;
        }
        else if(ans==num)
        {
            cnt++;
        }
        else
        cnt--;
     }
     return ans;
    }
};