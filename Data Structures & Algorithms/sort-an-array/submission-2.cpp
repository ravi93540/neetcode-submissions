class Solution {
public:
 
      
    vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    for(int i=0;i<n-1;i++)
    {
        int minind=i;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]<nums[minind])
           minind=j;
        }
        swap(nums[i],nums[minind]);
    }
    return nums;
    }
};