class Solution {
public:
    //solution 3:
    int part(vector<int>& nums,int left,int right){
            int p = nums[left];
            int l = left + 1, r = right;
            while(l <= r){
                if(nums[l] < p && nums[r] > p){
                    swap(nums[l],nums[r]);
                    l ++;    r --;
                }
                if(nums[l] >= p)   l ++;
                if(nums[r] <= p)   r --;
            }
            swap(nums[left], nums[r]);
            return r;
    }
    int findKthLargest(vector<int>& nums, int k) {
        /*solution 1: sort
        sort(nums.begin(),nums.end());
        return nums[nums.size() - k];
        */
        
        //solution 2: priority_queue;
        /*priority_queue<int> pq(nums.begin(),nums.end());
        while(pq.size() > nums.size() - k + 1){
            pq.pop();
        }
        return pq.top();
        */
        //solution 3: quick sort
        int left = 0, right = nums.size() - 1;
        while(1){
            int pos = part(nums, left, right);
            if(pos == k - 1)    return nums[pos];
            if(pos > k-1)    right = pos - 1;
            else    left = pos + 1;
        }
        //solutin 4: heap sort (pending)
        
        
    }
};