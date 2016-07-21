class Solution {
public:
    double myPow(double x, int n) {
        /*最后一个test不能过：x = 2 , n = -2147483648
        
        if(n == 0)
            return 1;
        if(n < 0){
            n = -n;
            x = 1 / x;
        }
        return (n % 2 == 0) ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);*/
        
        if(n == 0) return 1;
        double t = myPow(x,n / 2);
        if(n % 2) return n < 0 ? 1 / x * t * t : x * t * t;
        else return t * t;
    }
};