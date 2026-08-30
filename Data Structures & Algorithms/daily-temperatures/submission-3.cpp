class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0); // Initializes everything to 0 by default
        stack<int> st;         // Will store indices of the temperatures
        
        for (int i = 0; i < n; i++) {
            // While stack is not empty and current temperature is hotter 
            // than the temperature at the index stored at the top of the stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                ans[prevIndex] = i - prevIndex; // Distance between the days
            }
            // Push the current day's index onto the stack
            st.push(i);
        }
        
        return ans;
    }
};