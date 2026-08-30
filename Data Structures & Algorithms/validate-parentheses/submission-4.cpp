class Solution {
public:
    bool isValid(string s) {
        stack<char> se;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            se.push(s[i]);
            else
            {
                if(!se.empty())
                {
                    if(s[i]==')')
                    {
                        if(se.top()=='(')
                        {
                            se.pop();
                        }
                        else
                        return false;
                    }
                    if(s[i]==']')
                    {
                        if(se.top()=='[')
                        {
                            se.pop();
                        }
                        else
                        return false;
                    }
                    if(s[i]=='}')
                    {
                        if(se.top()=='{')
                        {
                            se.pop();
                        }
                        else
                        return false;
                    }
                }
                else
                return false;
            }
        }
        return se.empty();
    }
};
