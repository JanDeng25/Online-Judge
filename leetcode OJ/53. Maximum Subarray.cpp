class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, num = 0;
        for(int i = 0; i < nums.size(); i++){
            num += nums[i];
            if(sum < num)
                sum = num;
            if(num < 0)
                num = 0;
        }
        return sum;
    }
};