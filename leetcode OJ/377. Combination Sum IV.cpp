class Solution {
public:
	/*
	//iteration
	int combinationSum4(vector<int>& nums, int target) {
	vector<int> dp(target+1, 0);
	dp[0] = 1;
	for(int i = 0; i <= target; i++){
	for(int j = 0; j < nums.size(); j++){
	if(i - nums[j] >= 0)
	{
	dp[i] += dp[i - nums[j]];
	}
	}
	}
	return dp[target];
	}
	*/
	//Recursion
	int combinationSum4(vector<int>& nums, vector<int>& v, int target) {
		if (target <= 0)
			return !target;
		if (v[target] == -1) {
			v[target] = 0;
			for (int i = 0; i < nums.size(); i++) {
				v[target] += combinationSum4(nums, v, target - nums[i]);
			}
		}
		return v[target];
	}
	int combinationSum4(vector<int>& nums, int target) {
		vector<int> v(target + 1, -1);
		return combinationSum4(nums, v, target);
	}

};