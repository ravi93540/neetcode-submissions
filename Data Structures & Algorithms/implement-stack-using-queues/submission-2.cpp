class MyStack {
 vector<int> q;

public:
    MyStack() {
        
    }
    
    void push(int x) {
      q.push_back(x);
      
    }
    
    int pop() {
      if(q.size()>0)
      {
        int te=q.back();
        q.pop_back();
        return te;
      }
      return -1;
       
    }
    
    int top() {
     if(q.size()>0)
      {
        int te=q.back();
        //q.pop_back();
        return te;
      }
      return -1;
    }
    
    bool empty() {
       return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */