class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0;
        int max_kadane = INT_MIN, current_max = 0;
        int min_kadane = INT_MAX, current_min = 0;

        for (int x : nums) {
            total_sum += x;

            // Standard Kadane to find maximum middle subarray
            current_max += x;
            max_kadane = max(max_kadane, current_max);
            if (current_max < 0) current_max = 0;

            // Modified Kadane to find minimum middle subarray
            current_min += x;
            min_kadane = min(min_kadane, current_min);
            if (current_min > 0) current_min = 0;
        }

        // If all numbers are negative, max_kadane is the answer
        if (max_kadane < 0) return max_kadane;

        // Return the best of either the middle max or the wrap-around max
        return max(max_kadane, total_sum - min_kadane);
    }
};