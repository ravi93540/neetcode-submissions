class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int arr[10002]={0};
       for(int num:nums)
       {
        if(arr[num]!=0)
        return num;
        arr[num]++;
       }
       return -1;
        
    }
};
