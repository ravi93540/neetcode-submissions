class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<string> s;
       // stack<int> se;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {
                string str1=s.top();
                s.pop();
                string str2=s.top();
                int sum1=0;
                sum1=stoi(str1)+stoi(str2);
                s.push(str1);
                s.push(to_string(sum1));
            }
            else if(operations[i]=="C")
            {
                s.pop();
            }
            else if(operations[i]=="D")
            {
                int temp=stoi(s.top());
                int mul=1;
                mul=(2*temp);
                s.push(std::to_string(mul));
            }
            else
            {
                s.push(operations[i]);
            }
        }
        int ans=0;
        while(s.size()>0)
        {
            ans=ans+stoi(s.top());
            s.pop();
        }
        return ans;
    }
};