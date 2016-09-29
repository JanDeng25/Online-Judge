#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
	int prime[100001] = { 0 };
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 2; i * i <= 100001; i++) {
		for (int j = i; j * i <= 100001; j++) {
			prime[i*j] = 1;
		}
	}
	for (int i = 2; i <= n; i++) {
		if (!prime[i])
			v.push_back(i);
	}
	int ans = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << ' ';
		if (v[i+1] - v[i] == 2)
			ans++;
	}
	cout << ans << endl;
	return 0;
}