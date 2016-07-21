class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        long long y = x;
        int low = 0, high = 46340;
        int mid;
        while(low <= high){
            mid = (high + low) / 2;
            if(mid * mid > y){
                high = mid - 1;
            }
            else if(mid * mid < y)
                low = mid + 1;
            else
                return mid;
        }
        return low - 1;
    }
};