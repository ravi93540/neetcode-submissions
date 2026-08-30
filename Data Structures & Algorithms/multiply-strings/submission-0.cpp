class Solution {
public:
    string multiply(string num1, string num2) {
        long long l1=stoll(num1);
        long long l2=stoll(num2);
        long long l3=l1*l2;
        return to_string(l3);
    }
};
