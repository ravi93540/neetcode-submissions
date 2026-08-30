class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> se;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                if(se.size()>1)
                {
                    int a=se.top();
                    se.pop();
                    int b=se.top();
                    se.pop();
                    se.push(b);
                    se.push(a);
                    se.push(a+b);
                }
            }
            else if(operations[i]=="C")
            {
                if(se.size()>0)
                se.pop();
            }
            else if(operations[i]=="D")
            {
                if(se.size()>0)
                {
                    int a=se.top();
                    se.pop();
                   
                   
                  
                    se.push(a);
                    se.push(a*2);
                }
            }
            else
            {
                se.push(stoi(operations[i]));
            }
        }

        int ans=0;
        while(!se.empty())
        {
            cout<<se.top()<<" ";
            ans+=se.top();
            se.pop();
        }
        return ans;
    }
};