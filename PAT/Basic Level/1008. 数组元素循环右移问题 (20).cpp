#include <iostream>
#include <string>
//#include <map>
//#include <unordered_map>
#include <vector>
//#include <iomanip>
#include <algorithm>
using namespace std;
int main() {
	vector<int> num;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;    cin >> a;   num.push_back(a);
	}
	m %= n;
	vector<int>::iterator itr = num.begin();
	reverse(itr, itr + n - m);
	reverse(itr + n - m, num.end());
	reverse(num.begin(), num.end());
	int i = 0;
	for (; i < n-1; i++) {
		cout << num[i] << ' ';
	}
	cout << num[i] << endl;
	return 0;
}