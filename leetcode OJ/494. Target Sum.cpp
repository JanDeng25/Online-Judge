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
    /*�������Ϊ���ݣ�+��-�����У�
    nums[plus] + nums[minus] = sum;
    nums[plus] - nums[minus] = target;
    ��ʽ��ӣ��õ�
    nums[plus] = (sum + target) / 2;
    ����������Ѱ��������ĺ͵���(sum + target) / 2�����������
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