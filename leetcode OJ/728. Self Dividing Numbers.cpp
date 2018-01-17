class Solution {
public:
    bool self_divide(int i){
        int n = i;
        for(; n > 0; n /= 10){
            if(n % 10 == 0 || i % (n % 10) != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i <= right; i++){
            if(self_divide(i))
                res.push_back(i);
        }
        return res;
    }
};