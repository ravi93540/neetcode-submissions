class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_set<char> se;
         if (s1.length() > s2.length()) return false;

        vector<int> s1_count(26, 0), s2_count(26, 0);

        for (char c : s1) s1_count[c - 'a']++;

        for (int i = 0; i < s1.length(); i++)
            s2_count[s2[i] - 'a']++;

        if (s1_count == s2_count) return true;

        for (int i = s1.length(); i < s2.length(); i++) {
            s2_count[s2[i] - 'a']++;  // Add new char to window
            s2_count[s2[i - s1.length()] - 'a']--;  // Remove old char

            if (s1_count == s2_count)
                return true;
        }

        return false;
    }
};
