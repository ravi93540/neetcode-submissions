class Solution {
public:
    // Helper to check if substring s[l..r] is a palindrome
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                // Try skipping one character: either i or j
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++;
            j--;
        }

        return true;
    }
};
