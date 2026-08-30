class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=1;
        int temp=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==temp)
            {
                continue;
            }
            else
            {
                 temp=nums[i];
                nums[idx++]=nums[i];
               
            }
        }
        return idx;
    }
};