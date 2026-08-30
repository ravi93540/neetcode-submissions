class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int comp=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==comp)
            continue;
            else
            {
                 comp=nums[i];
                nums[k++]=nums[i];
               
            }


        
        }
        return k;
    }
};