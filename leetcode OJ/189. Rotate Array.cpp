class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //solution 1
        /*
        int size = nums.size();
        k = k % size;
        if(k == 0)
            return;
        vector<int> num(nums);
        int i;
        for(i = 0; i < k ; i ++){
            nums[i] = num[size - k + i];
        }
        for(i; i < size; i ++){
            nums[i] = num[i - k];
        }
        */
        
        //solution 2
        
        int size = nums.size();
        k %= size;
        reverse(nums.begin(),nums.begin() + (size - k));
        reverse(nums.begin() + (size - k),nums.end());
        reverse(nums.begin(),nums.end());
        
        //solution 3:most runtime
        //Time limit Exceed
        /*
        int size = nums.size();
        k %= size;
        for(int t = 0; t < k; t ++){
            int temp = nums[size - 1];
            for(int i = size - 1; i >= 1; i --){
                nums[i] = nums[i - 1];
            }
            nums[0] = temp;
        }*/
        
        // (i + k) % size
    }
};