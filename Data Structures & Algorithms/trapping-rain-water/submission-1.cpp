class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;
        int total_water = 0;

        while (left < right) {
            // We process the side with the shorter height 
            // because that side acts as the "bottleneck"
            if (height[left] < height[right]) {
                if (height[left] >= left_max) {
                    left_max = height[left]; // Update left boundary
                } else {
                    total_water += left_max - height[left]; // Trap water
                }
                left++;
            } else {
                if (height[right] >= right_max) {
                    right_max = height[right]; // Update right boundary
                } else {
                    total_water += right_max - height[right]; // Trap water
                }
                right--;
            }
        }

        return total_water;
    }
};