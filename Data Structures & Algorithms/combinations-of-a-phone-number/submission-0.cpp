class Solution {
public:
vector<string> comb={"","","abc","def","ghi","jkl",
        "mno","pqrs","tuv","wxyz"};
        vector<string> ans;
   void fun(string &digits,int i,string temp)
    {
        if(i>=digits.size())
        {
            ans.push_back(temp);
            return;
        }
        string chars=comb[digits[i]-'0'];
        for(int j=0;j<chars.size();j++)
        {
            fun(digits,i+1,temp+chars[j]);
        }
        

    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        return {};
        fun(digits,0,"");
        return ans;
    }
};
