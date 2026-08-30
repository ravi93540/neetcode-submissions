class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
      int m=matrix[0].size();
      int start=0,finish=n*m-1;
      while(start<=finish)
      {
        int mid=start+(finish-start)/2;
        int row=mid/m;
        int col=mid%m;
        if(matrix[row][col]==target)
        return true;
        else if(matrix[row][col]>target)
        finish=mid-1;
        else
        start=mid+1;
      }
      return false;
    }
};
