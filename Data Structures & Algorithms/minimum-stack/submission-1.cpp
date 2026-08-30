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
        int t=s.top();
        s.pop();
       if(mp[t]>1)
       mp[t]--;
       else
       mp.erase(t);
    }
    
    int top() {
        int t=s.top();
        return t;
    }
    
    int getMin() {
        auto itr=mp.begin();
        return itr->first;
    }
};
