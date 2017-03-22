class Solution {
public:
    
    int totalHammingDistance(vector<int>& nums) {
        int dist = 0;
        int size = nums.size();
        for(int i = 0; i < 32; i++){
            int num1 = 0;
            for(int j = 0; j < size; j++){
                if(nums[j] & 1)
                    num1++;
                nums[j] >>= 1;
            }
            dist += num1 * (size - num1);
        }
        return dist;
    }
};