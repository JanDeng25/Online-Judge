class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*int res = 0;
        for(int i = 0; i < 32; i ++){
            int count = 0;
            int bit = 1 << i;
            for(int j = 0; j < nums.size(); j ++){
                if(nums[j] & bit){
                    count ++;
                }
            }
            if(count % 3){
                res |= bit;
            }
        }
        return res;*/
        int first = 0, second = 0;
        for(int i = 0; i < nums.size(); i ++){
            first = (first ^ nums[i]) & ~second;
            second = (second ^ nums[i]) & ~first;
        }
        return first;
    }
};