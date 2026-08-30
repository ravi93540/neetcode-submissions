class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       int res=0,count=0;
       for(int i=0;i<n;i++)
       {
        if(count==0)
        {
            res=nums[i];
        }
        count+=(nums[i]==res)?1:-1;
       }
       return res;
    }
};