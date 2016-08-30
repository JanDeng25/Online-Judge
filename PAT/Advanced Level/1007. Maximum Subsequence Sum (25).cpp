#include <iostream>
//#include <stack>
//#include <string>
#include <vector>
using namespace std;
int main() {
	int k; cin >> k;
	vector<int> a;
	int temp;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	temp = 0;
	int sum = 0, start = 0, end = k - 1, si = 0, ej = 0;
	for (int i = 0; i < k; i++) {
		if (temp >= 0) {
			temp += a[i];
			ej = i;
		}
		else {
			temp = a[i];
			si = ej = i;
		}
		if (temp > sum || (temp == 0 && end == k - 1)) {
			sum = temp;
			start = si;
			end = ej;
		}

	}
	cout << sum << ' ' << a[start] << ' ' << a[end] << endl;

	return 0;
}