class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        combinationSum2(res, v, candidates, target, 0, 0);
        return res;
    }
private:
    void combinationSum2(vector<vector<int>>& res, vector<int>& v, vector<int>& candidates, int target, int sum,int ind) {
        if(sum == target){
            res.push_back(v);
            return;
        }
        else if(sum > target)
            return;
        for(int i = ind; i < candidates.size(); i++){
            sum += candidates[i];
            v.push_back(candidates[i]);
            combinationSum2(res, v, candidates, target, sum, i + 1);
            v.pop_back();
            sum -= candidates[i];
            while(i+1 < candidates.size() && candidates[i+1] == candidates[i])
                i++;
        }
    }
};