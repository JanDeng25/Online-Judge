class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        int dp[n][n] = {0};
        for(int i = s.length()-1; i >= 0; i--){
            dp[i][i] = 1;
            for(int j = i + 1; j < s.length(); j ++){
                if(s[i] == s[j]){
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                    //cout << dp[i + 1][j - 1] << endl;
                }
                else{
                    dp[i][j] = max(dp[i + 1][j], dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
    }
};