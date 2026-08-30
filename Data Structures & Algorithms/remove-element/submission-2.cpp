class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int k=0;
       for(int num:nums)
       {
        if(num==val)
        continue;
        else
        {
        nums[k]=num;
        k++;
        }
       }
       return k;
    }
};