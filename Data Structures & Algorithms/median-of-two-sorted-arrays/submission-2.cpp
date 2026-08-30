class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> temp(n+m,0);
        int idx=0;
        for(int num:nums1)
        temp[idx++]=num;
        for(int num:nums2)
        temp[idx++]=num;
        sort(temp.begin(),temp.end());
        if((n+m)%2==0)
        return (temp[(n+m)/2]+temp[((n+m)/2)-1])/2.0;
        else
        return double(temp[(n+m)/2]);
    }
};
