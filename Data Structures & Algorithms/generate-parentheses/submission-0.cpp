class Solution {
public:
void fun(int i,int j,int n,vector<string>&ans,string str)
{
    if(i==n && i==j)
    {
        ans.push_back(str);
        return;
    }
    if(i<n)
    {
        str=str+"(";
        fun(i+1,j,n,ans,str);
        str.pop_back();
    }
    if(j<i)
    {
        str=str+")";
        fun(i,j+1,n,ans,str);
        str.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str;
        fun(0,0,n,ans,str);
        return ans;
    }
};