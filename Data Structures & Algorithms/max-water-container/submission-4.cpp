class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n=heights.size();
       int ans=0;
       int i=0,j=n-1;
       while(i<j)
       {
        int len=j-i;
        int height=min(heights[i],heights[j]);
        ans=max(ans,len*height);
        if(heights[i]<heights[j])
        i++;
        else
        j--;
       }
       return ans;
    }
};
