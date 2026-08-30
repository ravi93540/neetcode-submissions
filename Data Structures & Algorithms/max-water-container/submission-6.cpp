class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int i=0,j=heights.size()-1;
        while(i<=j)
        {
            int length=(j-i);
            int breadth=min(heights[i],heights[j]);
            int area=(length*breadth);
            ans=max(ans,area);
            if(heights[i]>heights[j])
            j--;
            else
            i++;
        }
        return ans;
    }
};