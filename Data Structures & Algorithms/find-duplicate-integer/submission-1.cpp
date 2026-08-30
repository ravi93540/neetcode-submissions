class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr[10001]={0};
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<10001;i++)
        {
            if(arr[i]>1)
            return i;
        }
        return -1;
    }
};
