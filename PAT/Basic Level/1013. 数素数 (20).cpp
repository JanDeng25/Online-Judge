#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
	vector<int> prime;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < 200002; i++) {
		prime.push_back(0);
	}
	//cout << "end1" << endl;
	vector<int> v;
	
	for (int i = 2; i * i <= 200000; i++) {
		for (int j = i; j * i <= 200000; j++) {
			prime[i*j] = 1;
		}
	}
	//cout << "end2" << endl;
	for (int i = 2; i <= 200000; i++) {
		if (!prime[i])
			v.push_back(i);
	}
	for (int i = n - 1; i < m - 1; i++) {
		if ((i - n + 1) % 10 != 9)
			cout << v[i] << ' ';
		else
			cout << v[i] << endl;
	}
	cout << v[m - 1] << endl;
	//cout << v.size() << endl;
	return 0;
}