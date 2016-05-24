class Solution {
public:
    bool isHappy(int n) {
        if(n == 1)
           return true;
        /*unordered_map<int,int> m;
        int sum;
        int temp = n;
        m[n] ++;
        while(sum != 1){
            sum = 0;
            while(temp){
                int a = temp % 10;
                sum += a * a;
                temp /= 10;
            }
            if(m[sum] != 0)
                return false;
            m[sum] ++;
            temp = sum;
        }
        return true;
        */
        /*while(n > 6){
            int sum = 0;
            while(n){
                int a = n % 10;
                sum += a * a;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
        */
        while(1){
            int sum = 0;
            while(n){
                int a = n % 10;
                sum += a * a;
                n /= 10;
            }
            if(sum == 1)
                return true;
            if(sum == 4)
                return false;
            n = sum;
        }
        return n == 1;
        
    }
};