class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //solution 1:
        /*sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i+1])
                return nums[i];
        return 0;*/
        //solution 2: ¶þ²æ²éÕÒ
        /*int low = 0;
        int high = nums.size() - 1;
        int mid;
        while(low < high){
            int count = 0;
            mid = (low + high) / 2;
            for(int num : nums)
                if(num <= mid)    count++;
            if(count > mid)    high = mid;
            else    low = mid + 1;
        }
        return low;*/
        int slow = nums[0];
        int fast = nums[nums[0]];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast = 0;
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};