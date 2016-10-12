#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
	string a, q = "";
	int b;
	cin >> a >> b;
	int one = a[0] - '0';
	if (a.length() == 1)
	{
		cout << one / b << ' ' << one %b << endl;
		return 0;
	}
	int t;
	for (int i = 1; i < a.length(); i++) {
		t = 10 * one + a[i] - '0';
		q += to_string(t / b);
		one = t % b;
	}
	cout << q << ' ' << one << endl;
	return 0;
}