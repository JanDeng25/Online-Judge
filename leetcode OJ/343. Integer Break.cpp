class Solution {
public:
    int integerBreak(int n) {
        if(n == 2)
            return 1;
        if(n == 3)
            return 2;
        /*if(n == 4)
            return n;
        long * res = new long[n+1];
        res[2] = 2; res[3] = 3; res[4] = 4;
        for(int i = 5; i <= n; i ++){
            res[i] = 3 * res[i-3];
        }
        return res[n];*/
        int res = 1;
        while(n > 4){
            res *= 3;
            n -= 3;
        }
        res *= n;
        return res;
    }
};