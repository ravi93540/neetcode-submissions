class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            vector<int> temp1;
            int temp=nums[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(temp+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else if(temp+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {
                    temp1.push_back(temp);
                    temp1.push_back(nums[j]);
                    temp1.push_back(nums[k]);
                    ans.push_back(temp1);
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;
                    k--;
                    j++;
                    temp1.clear();
                }
            }
        }
        return ans;
    }

};
