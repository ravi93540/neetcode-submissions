class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> se;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
        se.push(s[i]);
        else
        {
            if(s[i]==')')
            {
                if(!se.empty())
                {
                    if(se.top()!='(')
                    return false;
                    else
                    se.pop();
                }
                else
                return false;
            }
            if(s[i]=='}')
            {
                if(!se.empty())
                {
                    if(se.top()!='{')
                    return false;
                    else
                    se.pop();
                }
                else
                return false;
            }
            if(s[i]==']')
            {
                if(!se.empty())
                {
                    if(se.top()!='[')
                    return false;
                    else
                    se.pop();
                }
                else
                return false;
            }
        }
    }
    return se.size()==0;
    }
};