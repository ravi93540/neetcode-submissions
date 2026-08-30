class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int ans1=0,ans2=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ans1)
            {
                cnt1++;
            }
            else if(nums[i]==ans2)
            {
                cnt2++;
            }
           else if(cnt1==0)
            {
                ans1=nums[i];
                cnt1=1;
            }
           else if(cnt2==0)
            {
                ans2=nums[i];
                cnt2=1;
            }
            
            else
            {
                cnt1--;
                cnt2--;
            }
        }

   vector<int> res{};
   int temp1=0,temp2=0;
   for(int num:nums)
   {
    if(num==ans1)
    temp1++;
    if(num==ans2)
    temp2++;
   }
   if(temp1>(n/3))
   res.push_back(ans1);
   if(temp2>(n/3))
   res.push_back(ans2);
   return res;
   
    }
};