class MedianFinder {
public:
priority_queue<int> low;
priority_queue<int,vector<int>,greater<int>> high;
    MedianFinder() {
        
    }
   void rebalance()
   {
    if(high.size()>low.size())
    {
      while(high.size()>low.size())
      {
        low.push(high.top());
        high.pop();
      }
    }
    else if(low.size()>high.size()+1)
    {
       while(low.size()!=high.size())
      {
        high.push(low.top());
        low.pop();
      }
    }
   }
    void addNum(int num) {
        if(low.empty())
        {
          low.push(num);
        }
    else if(num<low.top())
     {
      low.push(num);

     }
     else{
     high.push(num);
     }
     rebalance();
    }
    
    double findMedian() {
        if(low.size()==high.size())
        return (low.top()+high.top())/2.0;
        else
        return (double)low.top();
    }
};
