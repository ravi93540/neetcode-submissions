class Solution {
public:
vector<vector<int>> ans;
void fun(int n,int k, vector<int> temp,int idx)
{
    if(temp.size()==k)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<=n;i++)
    {
        
            temp.push_back(i);
            fun(n,k,temp,i+1);
                     temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
      
        fun(n,k,temp,1);
        return ans;
    }
};