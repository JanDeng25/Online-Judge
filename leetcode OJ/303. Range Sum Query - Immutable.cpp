class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int> &nums) {
        sum = nums;
        /*for(int i = 1;i < nums.size();i ++){
            sum[i] += sum[i-1];
        }*/
    }

    int sumRange(int i, int j) {
        /*if(i == 0)
            return sum[j];
        return sum[j] - sum[i-1];*/
        int sum1 = 0;
        for(int k = i;k <= j;k ++){
            sum1 += sum[k];
        }
        return sum1;
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);