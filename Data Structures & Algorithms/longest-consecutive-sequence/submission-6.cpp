class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       if(n==0)
       return 0;
       unordered_set<int> s(nums.begin(),nums.end());
       int cnt=0;
       for(int i=0;i<n;i++)
       {
        if(!s.count(nums[i]-1))
        {
           int currntnum=nums[i];
            int temp=1;
            while(s.count(currntnum+1))
            {
                currntnum=currntnum+1;
                temp=temp+1;
            }
            cnt=max(cnt,temp);
        }
       }
        
       return cnt;
    }
};
