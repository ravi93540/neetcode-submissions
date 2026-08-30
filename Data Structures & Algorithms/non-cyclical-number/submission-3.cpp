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
      int slow=n,fast=fun(n);
      while(slow!=fast)
      {
        fast=fun(fast);
        fast=fun(fast);
        slow=fun(slow);
      }
      return fast==1;
    }
};
