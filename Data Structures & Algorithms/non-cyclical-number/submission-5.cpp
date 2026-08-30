class Solution {
public:
  int fun(int n)
  {
    int sum=0;
    while(n>0)
    {
      int te=n%10;
      sum=sum+(te*te);
      n=n/10;
    }
    return sum;
  }
    bool isHappy(int n) {
      if(n==1)
      return true;
      unordered_set<int> se;
      while(!se.count(n))
      {
      se.insert(n);
      n=fun(n);
      }
      return (n==1);



    }
};