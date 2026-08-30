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
        int t=s.top();
        return t;
    }
    
    int getMin() {
       int ans=INT_MAX;
       stack<int> temp;
       while(s.size()!=0)
       {
         int te=s.top();
         ans=min(ans,te);
         s.pop();
         temp.push(te);
       }
       while(temp.size()!=0)
       {
         int te=temp.top();
         temp.pop();
         s.push(te);
       }
       return ans;

    }
};
