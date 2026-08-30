class Solution {
public:
int fun(int n)
{
    int sum=0;
     while(n>0)
        {
            int mod=n%10;
            //cout<<mod<<" ";
             sum=sum+pow(mod,2);
            //cout<<sum<<endl;
            n=n/10;
        }
        cout<<sum<<endl;
        return sum;
}
    bool isHappy(int n) {
        unordered_set<int> s;
    while(s.find(n)==s.end())
    {
      s.insert(n);
      n=fun(n);
      if(n==1)
      {
        return true;
      }
    }
    return false;
    }
};
