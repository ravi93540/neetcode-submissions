class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to optimize binary search runtime
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int n = nums1.size();
        int m = nums2.size();
        int low = 0, high = n;
        
        while (low <= high) {
            int partitionX = (low + high) / 2;
            int partitionY = (n + m + 1) / 2 - partitionX;
            
            // Edge cases: handling out-of-bound partitions with infinity boundaries
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == n) ? INT_MAX : nums1[partitionX];
            
            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == m) ? INT_MAX : nums2[partitionY];
            
            // Check if we found the correct partition
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((n + m) % 2 == 0) {
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                } else {
                    return max(maxLeftX, maxLeftY);
                }
            }
            else if (maxLeftX > minRightY) {
                high = partitionX - 1; // Move left in nums1
            }
            else {
                low = partitionX + 1; // Move right in nums1
            }
        }
        return 0.0;
    }
};