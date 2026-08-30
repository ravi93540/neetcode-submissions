class Solution {
public:
    int reverse(int x) {
      int orig=x;
      x=abs(x);
      string str=to_string(x);
      std::reverse(str.begin(),str.end());
      long long res=stoll(str);
      if(orig<0)
      res=res*(-1);
      if(res<INT32_MIN || res>INT32_MAX)
      return 0;
      return static_cast<int>(res);
      
    }
};
