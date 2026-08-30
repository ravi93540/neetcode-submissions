class Solution {
public:

    string encode(vector<string>& strs) {
        string temp="";
        for(int i=0;i<strs.size();i++)
        {
            temp=temp+"?";
            temp=temp+strs[i];
        }
       // cout<<temp<<endl;
        return temp;
    }

    vector<string> decode(string s) {
        if(s.size()==0)
        return {};
        vector<string> ans;
        string temp="";
        //cout<<s.size()<<endl;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                ans.push_back(temp);
                temp="";
            }
            else
            temp=temp+s[i];
        }
        ans.push_back(temp);
        return ans;
    }
};
