class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int amount1 = rob2(nums, 0, nums.size() - 2);
        int amount2 = rob2(nums, 1, nums.size() - 1);
        return max(amount1, amount2);
    }
    int rob2(vector<int>& nums, int begin, int end){
        int amount1 = 0, amount2 = 0;
        for(int i = begin; i <= end; i++){
            int tmp = max(amount2, amount1 + nums[i]);
            amount1 = amount2;
            amount2 = tmp;
        }
        return amount2;
    }
};