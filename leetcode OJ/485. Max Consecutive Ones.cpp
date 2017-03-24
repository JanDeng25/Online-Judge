class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int num = 0;
        int ans = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i])
                num++;
            else{
                if(num > ans)   ans = num;
                num = 0;
            }
        }
        return ans > num ? ans : num;
    }
};