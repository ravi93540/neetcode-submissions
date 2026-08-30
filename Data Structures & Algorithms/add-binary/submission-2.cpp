class Solution {
public:
    string addBinary(string a, string b) {
       int carry=0;
       int i=a.size()-1,j=b.size()-1;
      
       string res="";
       while(i>=0 || j>=0 ||carry!=0 )
       {
        int s1=0,s2=0;
        if(i>=0)
        s1=a[i--]-'0';
         if(j>=0)
        s2=b[j--]-'0';
        int sum=0;
         sum=s1+s2+carry;
         cout<<sum<<" ";
        if(sum<=1)
        {
            carry=0;
            res=res+to_string(sum);

            
        }
        else if(sum==2)
        {
          carry=1;
            res=res+to_string(0);  
        }
        else
        {
            carry=1;
            res=res+to_string(1); 
        }

       }
       reverse(res.begin(),res.end());
       return res;
    }
};