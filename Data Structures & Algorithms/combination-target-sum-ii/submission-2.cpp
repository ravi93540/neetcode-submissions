class Solution {
public:
    void fun(int start, int target, vector<int>& candidates, vector<int>& temp, vector<vector<int>>& ans) {
        
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            
            if (candidates[i] > target) break;
            if (i > start && candidates[i] == candidates[i-1]) continue;
            temp.push_back(candidates[i]);   
            fun(i + 1, target - candidates[i], candidates, temp, ans);
            temp.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(candidates.begin(), candidates.end());
        fun(0, target, candidates, temp, ans);
        return ans;
    }
};