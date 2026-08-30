class Solution {
public:
    string decodeString(string s) {
        stack<char> se;

        for (char c : s) {
            if (c != ']') {
               
                se.push(c);
            } 
            else {
               
                string currentStr = "";
                while (!se.empty() && se.top() != '[') {
                    currentStr = se.top() + currentStr; 
                    se.pop();
                }
                
                // Pop the opening bracket '['
                if (!se.empty()) se.pop();

               
                string numStr = "";
                while (!se.empty() && isdigit(se.top())) {
                    numStr = se.top() + numStr; 
                    se.pop();
                }
                int count = stoi(numStr);

               
                string repeatedStr = "";
                while (count--) {
                    repeatedStr += currentStr;
                }
                
              
                for (char rc : repeatedStr) {
                    se.push(rc);
                }
            }
        }

        // Reconstruct the final decoded string from the stack
        string ans = "";
        while (!se.empty()) {
            ans = se.top() + ans;
            se.pop();
        }
        
        return ans;
    }
};