class Solution {
public:
 
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);  // Frequency of each letter
        int left = 0, maxCount = 0, maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);

            // If number of letters to change > k, shrink the window
            while ((right - left + 1) - maxCount > k) {
                count[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};


