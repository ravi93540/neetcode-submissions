class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
      int left=0,right=n-1;
      while(left<right)
      {
        int temp=((min(heights[left],heights[right]))*(right-left));
        ans=max(ans,temp);
        if(heights[left]<heights[right])
        {
            left++;
        }
        else
        {
            right--;
        }
      }
        return ans;
    }
};
