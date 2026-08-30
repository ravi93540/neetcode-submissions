class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int ans=0;
       for(int i=1;i<n-1;i++)
       {
        int maxleft=0,maxright=0;
        for(int j=i;j>=0;j--)
        {
            maxleft=max(maxleft,height[j]);

        }
        for(int j=i;j<n;j++)
        {
            maxright=max(maxright,height[j]);
        }
        ans+=min(maxleft,maxright)-height[i];
       }
       return ans;
    }
};