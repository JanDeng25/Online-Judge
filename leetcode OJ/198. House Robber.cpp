class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        vector<int> maxAmount;
        maxAmount.push_back(nums[0]);
        maxAmount.push_back(max(nums[0],nums[1]));
        for(int i = 2; i < nums.size(); i ++){
            int temp = max(maxAmount[i-1],maxAmount[i-2] + nums[i]);
            maxAmount.push_back(temp);
        }
        return maxAmount[nums.size()-1];
    }
};