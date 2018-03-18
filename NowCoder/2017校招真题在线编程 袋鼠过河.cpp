//DP，DP的公式为：if(j+v[j]>=i)	dp[i]=min(dp[i],dp[j]+1);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dp(vector<int> v) {
	int n = v.size();
	vector<int> dp(n + 1, 10000);
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (v[j] == 0)
				continue;
			if (j + v[j] >= i)
			{
				dp[i] = min(dp[i], dp[j] + 1);
			}
		}
	}
	if (dp[n] == 10000)
		return -1;
	return dp[n]- 1;
}
int main() {
	
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	cout << dp(v) << endl;

	return 0;
}