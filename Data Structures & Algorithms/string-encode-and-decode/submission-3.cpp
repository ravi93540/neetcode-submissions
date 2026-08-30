class Solution {
    vector<string> v;
public:

    string encode(vector<string>& strs) {
       v=strs;
       string res="";
       for(int i=0;i<strs.size();i++)
       {
        res=res+strs[i];
       }
       return res;
    }

    vector<string> decode(string s) {
        return v;
    }
};
