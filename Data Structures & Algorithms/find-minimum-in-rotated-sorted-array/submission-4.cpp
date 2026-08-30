class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans=INT_MAX;
        int i=0,j=nums.size()-1;

        while(i<=j)
        {
            int mid=i+(j-i)/2;
            ans=min(ans,nums[mid]);
            if(nums[mid]>nums[j])
            i=mid+1;
            else
            j=mid-1;
        }
        return ans;
    }
};