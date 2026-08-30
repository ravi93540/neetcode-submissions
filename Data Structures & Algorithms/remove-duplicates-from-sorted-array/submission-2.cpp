class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int n=nums.size();
        int comp=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==comp)
            {
                continue;
            }
            else
            {
                comp=nums[i];
                nums[k++]=comp;
            }

        }
        return k;
    }
};