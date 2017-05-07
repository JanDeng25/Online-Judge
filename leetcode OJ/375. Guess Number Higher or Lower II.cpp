class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        return dp_func(dp, 1, n);
    }
    int dp_func(vector<vector<int>>& dp, int left, int right){
        int res = INT_MAX;
        if(left >= right)    return 0;
        if(dp[left][right] != 0)    return dp[left][right];
        for(int i = left; i <= right; i++){
            int tmp = i + max(dp_func(dp, left, i - 1), dp_func(dp, i+1, right));
            res = min(tmp, res);
        }
        dp[left][right] = res;
        return res;
    }
};