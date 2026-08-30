class Solution {
public:
 
      
    vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]<nums[i])
            swap(nums[j],nums[i]);
        }
    }
    return nums;
    }
};