class Solution {
public:
bool isPalindrome(string temp,int l,int r)
{
    while(l<r)
    {
        if(temp[l]!=temp[r])
        return false;
        l++;
        r--;
    }
    return true;
}
void fun(vector<string> &temp,vector<vector<string>>& ans,int i,string &s)
{
    if(i>=s.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int j=i;j<s.size();j++)
    {
        if(isPalindrome(s,i,j))
        {
        temp.push_back(s.substr(i,j-i+1));
        fun(temp,ans,j+1,s);
        temp.pop_back();
        }
    }
}

    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>> ans;
        fun(temp,ans,0,s);
        return ans;
    }
};
