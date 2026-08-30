class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k=k%n;
       if(k==0)
       return;
       int i=0,j=n-1;
       while(i<j)
       {
        swap(nums[i],nums[j]);
        i++;
        j--;
       }
       int a=0,b=k-1;
       while(a<b)
       {
        swap(nums[a],nums[b]);
        a++;
        b--;
       }
       int c=k,d=n-1;
       while(c<d)
       {
        swap(nums[c],nums[d]);
        c++;
        d--;
       }
    }
};