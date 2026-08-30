class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int i=0;
        int n=s.size();
        while(i<s.size())
        {
            if(s[i]=='I')
            {
                if(i+1<n && s[i+1]=='V')
                {
                    ans=ans+4;
                    i=i+2;
                    continue;
                }
                if(i+1<n && s[i+1]=='X')
                {
                    
                    ans=ans+9;
                    i=i+2;
                    continue;
                
                }
                else
                {
                    ans=ans+1;
                    i=i+1;
                    continue;
                }
            }
           else if(s[i]=='X')
            {
                if(i+1<n && s[i+1]=='L')
                {
                   //cout<<"y";
                    ans=ans+40;
                    i=i+2;
                    continue;
                }
                if(i+1<n && s[i+1]=='C')
                {
                    
                    ans=ans+90;
                    i=i+2;
                    continue;
                
                }
                else
                {
                    ans=ans+10;
                    i=i+1;
                    continue;
                }
            } 
            else if(s[i]=='C')
            {
                if(i+1<n && s[i+1]=='D')
                {
                    ans=ans+400;
                    i=i+2;
                    continue;
                }
                if(i+1<n && s[i+1]=='M')
                {
                    
                    ans=ans+900;
                    i=i+2;
                    continue;
                
                }
                else
                {
                    ans=ans+100;
                    i=i+1;
                    continue;
                }
            } 
            else if(s[i]=='V')
            {
                ans=ans+5;
                    i=i+1;
                    continue;
            }
            else if(s[i]=='L')
            {
                ans=ans+50;
                    i=i+1;
                    continue;
            }
            else if(s[i]=='D')
            {
                ans=ans+500;
                    i=i+1;
                    continue;
            }
            else
            {
                ans=ans+1000;
                    i=i+1;
                    continue;
            }
            cout<<ans<<" ";
        }
  return ans;
        
    }
};