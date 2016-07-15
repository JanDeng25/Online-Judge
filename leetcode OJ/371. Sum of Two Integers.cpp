class Solution {
public:
    int getSum(int a, int b) {
        int sum = a;
        while(b != 0){
            sum = a ^ b; // 不考虑进位
            b = (a & b) << 1; // 进位
            a = sum;
        }
        return sum;
    }
};