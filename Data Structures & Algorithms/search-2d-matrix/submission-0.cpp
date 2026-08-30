class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        int i=0,j=v.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(v[mid]==target)
            {
                return true;
            }
            else if(v[mid]>target)
            {
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return false;
    }
};
