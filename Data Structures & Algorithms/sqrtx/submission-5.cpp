class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;
        int i=1,j=x;
        while(i<=j)
        {
            long long mid=i+(j-i)/2;
            long long mul=mid*mid;
            if((mul)==x)
            return mid;
            else if((mul)<x )
            {
                i=mid+1;
            } 
            else 
            j=mid-1;
           
        }
        return j;
    }
};