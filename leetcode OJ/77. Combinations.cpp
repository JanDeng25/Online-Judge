class Solution {
public:
    void recursion(vector<vector<int>> &res, vector<int>& v, int begin, int n, int k){
        if(v.size() == k){
            res.push_back(v);
            return;
        }
        for(int i = begin; i <= n; i++){
            v.push_back(i);
            recursion(res, v, i+1, n, k);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> v;
        recursion(res, v, 1, n, k);
        return res;
    }
};