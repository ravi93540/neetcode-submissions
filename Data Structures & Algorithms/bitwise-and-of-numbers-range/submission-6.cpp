class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift=0;
        while(left<right)
        {
            shift++;
            left=left>>1;
            right=right>>1;
        }
        return left<<shift;
    }
};