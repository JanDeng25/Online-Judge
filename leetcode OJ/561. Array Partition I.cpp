class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //�ҳ���������һ���н�С���Ǹ����ĺ�
        sort(nums.begin(), nums.end());
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i += 2){
            sum += nums[i];
        }
        return sum;
    }
};