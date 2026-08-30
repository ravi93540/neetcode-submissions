class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp=((min(heights[i],heights[j]))*(j-i));
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};
