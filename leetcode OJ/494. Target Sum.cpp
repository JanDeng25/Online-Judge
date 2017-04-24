class Solution {
public:
    /*
    //DFS
    int count = 0;
    void dfs(vector<int>& nums, int depth, int sum, int S){
        if(depth == nums.size()){
            if(sum == S)    count ++;
            return ;
        }
        dfs(nums, depth+1, sum - nums[depth], S);
        dfs(nums, depth+1, sum + nums[depth], S);
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        dfs(nums, 0, 0, S);
        return count;
    }
    */
    //DP
    /*把数组分为两份，+，-。则有：
    nums[plus] + nums[minus] = sum;
    nums[plus] - nums[minus] = target;
    两式相加，得到
    nums[plus] = (sum + target) / 2;
    即在数组中寻找子数组的和等于(sum + target) / 2的子数组个数
    */
    int findSubset(vector<int>& nums, int S){
        vector<int> dp(S+1, 0);
        dp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = S; j >= nums[i]; j--){
                dp[j] += dp[j - nums[i]];
            }
        }
        return dp[S];
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if((sum + S) % 2 || sum < S)
            return 0;
        return findSubset(nums, (sum + S) / 2);
    }
};