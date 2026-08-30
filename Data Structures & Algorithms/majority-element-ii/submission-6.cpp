class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int ans1=0,ans2=0;
int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0)
            {
                ans1=nums[i];
                cnt1=1;
            }
            else if(ans1==nums[i])
            {
                cnt1++;
            }
            else if(cnt2==0)
            {
                cnt2++;
                ans2=nums[i];
            }
            else if(nums[i]==ans2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }

        }
int cnt_1=0,cnt_2=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ans1)
            cnt_1++;
            if(nums[i]==ans2)
            cnt_2++;
        }
        if(cnt_1>n/3)
        ans.push_back(ans1);
        if(cnt_2>n/3)
        ans.push_back(ans2);

        return ans;

    }
};