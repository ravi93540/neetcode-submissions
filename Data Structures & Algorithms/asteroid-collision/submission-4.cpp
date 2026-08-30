class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int> stack;

      for(int ast:asteroids)
      {
        bool flag=false;
        while(!stack.empty() && (stack.back()>0 && ast<0) )
        {
          if(abs(stack.back())>abs(ast))
          {
            flag=true;
            break;
          }
          else if(abs(stack.back())==abs(ast))
          {
            stack.pop_back();
            flag=true;
           break;
          }
          else
          {
            stack.pop_back();
           // stack.push_back(ast);
          }
        }
        if(!flag)
        stack.push_back(ast);
      }
      return stack;
    }
};