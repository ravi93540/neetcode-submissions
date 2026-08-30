class Solution {
public:
    bool isValid(string s) {
        int cnt=0;
        int n=s.size();
        stack<char> se;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                cnt++;
                se.push(s[i]);
            }
            else
            {
                if(!se.empty())
                {
                char temp=se.top();
                if(s[i]=='}')
                {
                    if(temp=='{')
                    {
                        cnt--;
                        se.pop();
                    }
                    else
                    return false;
                }
                else if(s[i]==']')
                {
                    if(temp=='[')
                    {
                        cnt--;
                        se.pop();
                    }
                    else
                    return false;
                }
                else
                {
                    if(temp=='(')
                    {
                        cnt--;
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
        return (cnt==0);
    }
};
