class Solution {
public:
    int getSum(int a, int b) {
        int sum = a;
        while(b != 0){
            sum = a ^ b; // �����ǽ�λ
            b = (a & b) << 1; // ��λ
            a = sum;
        }
        return sum;
    }
};