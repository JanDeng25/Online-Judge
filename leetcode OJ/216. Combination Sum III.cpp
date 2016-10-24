class Solution {
public:
    void combinationSum3(vector<vector<int>>& res, vector<int>& v,int sum, int ind, int k, int n){
        if(sum == n && v.size() == k){
            res.push_back(v);
            return;
        }
        else if((sum == n && v.size() != k) || sum > n){
            return;
        }
        for(int i = ind; i <= 9; i++){
            v.push_back(i);
            sum += i;
            combinationSum3(res, v, sum, i+1, k, n);
            sum -= i;
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> v;
        combinationSum3(res, v, 0, 1, k, n);
        return res;
    }
};