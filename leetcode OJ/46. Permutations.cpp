class Solution {
public:
    void permute(vector<vector<int>>& res, vector<int>& nums, int begin){
        if(begin == nums.size()-1){
            res.push_back(nums);
            return;
        }
        for(int i = begin; i < nums.size(); i++){
            
            swap(nums[i], nums[begin]);
            //cout << nums[i] << ' ' << nums[begin] << endl;
            permute(res, nums, begin+1);
            swap(nums[i], nums[begin]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permute(res, nums, 0);
        return res;
    }
};