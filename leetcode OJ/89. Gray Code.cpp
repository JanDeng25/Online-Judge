class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> gray;
        if(n == 0)
            return {0};
        gray = vector<int> {0,1};
        int power = 2,size;
        for(int i = 2; i <= n; i ++){
            size = gray.size();
            for(int j = size - 1; j >= 0; j --){
                gray.push_back(power + gray[j]);
            }
            power *= 2;
        }
        return gray;
    }
};