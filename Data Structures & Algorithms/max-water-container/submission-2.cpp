class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n=heights.size();
       int ans=0;
       for(int i=0;i<n-1;i++)
       {
        for(int j=i+1;j<n;j++)
        {
          int mul=(j-i)*min(heights[i],heights[j]);
          ans=max(ans,mul);
        }
       }
       return ans;
    }
};
