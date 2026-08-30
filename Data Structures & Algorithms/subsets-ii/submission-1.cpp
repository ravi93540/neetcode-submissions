class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
        ans.push_back(temp);  // include current subset

        for (int i = start; i < nums.size(); ++i) {
            // 🔹 Skip duplicates at the same recursion level
            if (i > start && nums[i] == nums[i - 1])
                continue;

            temp.push_back(nums[i]);          // choose current element
            backtrack(i + 1, nums, temp, ans); // explore further
            temp.pop_back();                   // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums.begin(), nums.end()); // 🔸 Sorting ensures duplicates are adjacent
        backtrack(0, nums, temp, ans);

        return ans;
    }
};
