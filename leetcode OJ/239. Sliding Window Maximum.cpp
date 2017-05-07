class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        //队列的第一个值永远为当前最大值
        deque<int> q;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(!q.empty() && q.front() == i - k)    //说明窗口要划过当前最大值
                q.pop_front();
            while(!q.empty() && nums[q.back()] < nums[i])           //队列后小于要入队的数的都出队
                q.pop_back();
            q.push_back(i);                                     //数字下标入队
            if(i >= k - 1)                                      //输入结果队列
                ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};