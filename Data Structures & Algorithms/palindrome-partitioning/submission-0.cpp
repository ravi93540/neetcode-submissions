class Solution {
public:
bool isPalindrome(string str,int i,int j)
{
    
    while(i<j)
    {
        if(str[i]!=str[j])
        {
        return false;
        }
        i++;
        j--;
    
    }
    return true;
}
void fun(int i,string& s,vector<string>& temp,vector<vector<string>>&ans)
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
            fun(j+1,s,temp,ans);
            temp.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        fun(0,s,temp,ans);

    return ans;
    }
};
