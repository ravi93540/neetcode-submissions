class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n)
        return -1;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        pq.push(nums[i]);
        int ans=INT_MAX;
        while(k>0)
        {
            ans=pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};
