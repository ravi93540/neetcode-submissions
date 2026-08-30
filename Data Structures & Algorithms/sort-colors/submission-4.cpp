class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
    int cnt_zero=0,cnt_one=0,cnt_two=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        cnt_zero++;
        else if(nums[i]==1)
        cnt_one++;
        else
        cnt_two++;
    }
    
    for(int i=0;i<cnt_zero;i++)
    nums[i]=0;
    for(int i=cnt_zero;i<cnt_one+cnt_zero;i++)
    nums[i]=1;
    for(int i=cnt_one+cnt_zero;i<n;i++)
    nums[i]=2;

    }
};