class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n=nums.size();
      int start=0,finish=n-1;
      while(start<=finish)
      {
        int mid=start+(finish-start)/2;
        if(nums[mid]==target)
        return mid;
        if(nums[mid]>=nums[start])
        {
          if(nums[mid]>=target && nums[start]<=target)
          finish=mid-1;
          else
          start=mid+1;
        }
        else
        {
          if(nums[mid]<=target && nums[finish]>=target)
          start=mid+1;
          else
          finish=mid-1;
        }
      }
      return -1;
    }
};
