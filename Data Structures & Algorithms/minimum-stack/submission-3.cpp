class MinStack {
public:
stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
       s.push(val);
        
    }
    
    void pop() {
       
        s.pop();
       
    }
    
    int top() {
        int val=-1;
        if(!s.empty())
        val=s.top();

        return val;
    }
    
    int getMin() {
       int ans=INT_MAX;
        stack<int> s2;
        while(!s.empty())
        {
            s2.push(s.top());
            ans=min(ans,s.top());
            s.pop();
        }
        while(!s2.empty())
        {
             s.push(s2.top());
           
            s2.pop();
        }
        return ans;
    }
};
