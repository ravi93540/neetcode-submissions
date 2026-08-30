class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(int i=0;i<nums1.size();i++)
        temp.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
        temp.push_back(nums2[i]);
        sort(temp.begin(),temp.end());

        int n=temp.size();
        float ans;
        if(n%2!=0)
        {
            ans= static_cast<float>(temp[n/2]);
            return ans;
        }
        else
        {
            ans=static_cast<float>(temp[n/2-1]+temp[n/2]);
            return ans/2;
        }
        return -1;


    }
};
