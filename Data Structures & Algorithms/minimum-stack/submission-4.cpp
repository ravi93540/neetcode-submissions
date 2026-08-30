class MinStack {
public:
stack<int> s;
map<int,int> mp;
    MinStack() {
        
    }
    
    void push(int val) {
       s.push(val);
       mp[val]++;
        
    }
    
    void pop() {
        int top=s.top();
      if(mp[top]>1)
      mp[top]--;
      else
      mp.erase(top);
        s.pop();
       
       
    }
    
    int top() {
        int val=-1;
        if(!s.empty())
        val=s.top();

        return val;
    }
    
    int getMin() {
       auto it=mp.begin();
       return it->first;
    }
};
