class Solution {
public:
    int checkPalindrome(int i, int j, const string& s, vector<vector<int>>& memo) {
        // Base cases
        if (i >= j) return 1;

        // Return cached result if already computed
        if (memo[i][j] != -1) return memo[i][j];

        // Boundary mismatch
        if (s[i] != s[j]) {
            return memo[i][j] = 0;
        }

        // Recursive transition
        return memo[i][j] = checkPalindrome(i + 1, j - 1, s, memo);
    }

    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        vector<vector<int>> memo(n, vector<int>(n, -1));
        int start = 0, maxLen = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkPalindrome(i, j, s, memo) == 1) {
                    int len = j - i + 1;
                    if (len > maxLen) {
                        maxLen = len;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};