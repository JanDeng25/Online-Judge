class Solution {
public:
    int trailingZeroes(int n) {
        //find how many pair(2,5) = how many 5
        int numZero = 0;
        while(n){
            numZero += n / 5;
            n /= 5;
        }
        return numZero;
    }
};