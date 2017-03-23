class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        stack<int> s;
        for(int i = 0; i < 2 * nums.size(); i++){
            int num = nums[i % nums.size()];
            while(!s.empty() && nums[s.top()] < num){
                ans[s.top()] = num;
                s.pop();            
            }
            if(i < nums.size())   s.push(i);
        }
        return ans;
    }
};