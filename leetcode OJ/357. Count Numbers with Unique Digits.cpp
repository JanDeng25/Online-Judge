class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int sum = 91, f[20];
        f[1] = 10, f[2] = 81;
        for(int i = 3; i <= n; i ++){
            f[i] = f[i-1] * (9-i+2);
            sum += f[i];
        }
        if(n == 0)
            return 1;
        if(n == 1)
            return f[1];
        return sum;
    }
};