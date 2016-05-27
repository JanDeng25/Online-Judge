class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        if(size == 0)
            return res;
        /*
        if(size == 1)
            return res = {1};
        if(size == 2)
            return res = {nums[1],nums[0]};
        int *order = new int[size];
        order[0] = nums[0];
        cout<<order[0]<<' '<<nums[0]<<endl;
        int *reverse = new int[size];
        reverse[size-1] = nums[size-1];
        for(int i = 1, j = size-2; i < size; i ++, j --){
            order[i] = order[i-1] * nums[i];
            reverse[j] = reverse[j+1] * nums[j];
        }
        res.push_back(reverse[1]);
        for(int i = 1; i < size-1; i ++){
            res.push_back(order[i-1] * reverse[i+1]);
        }
        res.push_back(order[size-2]);
        return res;
        */
        
        //The first method retrieve the vector 3 times, now we decrease to 2
        //besides the space is not content
        //Note: The output array does not count as extra space for the purpose of space complexity analysis
        res = vector<int>(size,1);
        for(int i = 1; i < size; i ++){
            res[i] = res[i-1] * nums[i-1];
        }
        int temp = 1;
        for(int i = size-1; i >= 0; i --){
            res[i] *= temp;
            temp *= nums[i];
        }
        return res;
    }
};