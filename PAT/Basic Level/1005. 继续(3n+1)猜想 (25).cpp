#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
void find_and_insert(set<int>& s, int a) {
	while (a != 1) {
		a = (a & 1) ? (3 * a + 1) >> 1 : a >> 1;
		if (s.find(a) == s.end()) {
			s.insert(a);
		}
		else
			break;
	}
}
int main() {
	int n, temp;
	cin >> n;
	vector<int> v;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
		find_and_insert(s, temp);
	}
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		if (s.find(v[i]) == s.end())
		{
			ans.push_back(v[i]);
		}
	}
	sort(ans.begin(), ans.end());
	for (int i = ans.size() - 1; i >= 1; i--) {
		cout << ans[i] << ' ';
	}
	cout << ans[0] << endl;
	return 0;
}