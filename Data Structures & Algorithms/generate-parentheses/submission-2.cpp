class Solution {
public:
vector<string> ans;
void fun(int i,int j,int n,string temp)
{
  if(i==n && j==n)
 {
  ans.push_back(temp);
  return;
 }
 if(i<n)
  fun(i+1,j,n,temp+"(");
  if(j<i)
  fun(i,j+1,n,temp+")");
}
vector<string> generateParenthesis(int n) {
     fun(0,0,n,"");
     return ans;   
}
};