class Solution {
public:
vector<string> ans;
void fun(string temp,int i,int j,int n)
{
    if(i==n && j==n)
    {
        ans.push_back(temp);
        return;
    }
    if(i<n)
    {
        fun(temp+'(',i+1,j,n);
    }
    if(j<i)
    {
        fun(temp+')',i,j+1,n);
    }

}
    vector<string> generateParenthesis(int n) {
        
        string temp="";
        fun("",0,0,n);
        return ans;

    }
};