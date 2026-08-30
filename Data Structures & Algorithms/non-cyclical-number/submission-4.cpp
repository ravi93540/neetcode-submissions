class Solution {
public:
int fun(int n)
{
    int ans=0;
    while(n)
    {
        int mod=n%10;
        ans=ans+pow(mod,2);
        n=n/10;
    }
    return ans;
}
    bool isHappy(int n) {
      unordered_set<int> se;
      if(n==1)
      return true;
      while(n!=1)
      {
        
        if(se.count(n))
        return false;
        se.insert(n);
        n=fun(n);
      }
return n==1;
    }
};
