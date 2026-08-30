class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int ans=INT_MIN;
int sum=0;
for(int num:nums)
{
    sum+=num;
    ans=max(ans,sum);
    if(num>sum)
    {
        sum=num;
    }
}
ans=max(ans,sum);
return ans;
    }
};
