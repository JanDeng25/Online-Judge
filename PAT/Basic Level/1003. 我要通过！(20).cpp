#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	while (n--) {
		cin >> s;
		int p = s.find_first_not_of('A');
		if (p == -1 || s[p] != 'P')
		{
			cout << "NO" << endl;
			continue;
		}
		int t = s.find_first_not_of('A', p + 1);
		if (t == p + 1 || s[t] != 'T' || t == -1)
		{
			cout << "NO" << endl;
			continue;
		}
		int a = s.find_first_not_of('A', t + 1);
		if (a != -1) {
			cout << "NO" << endl;
			continue;
		}
		if (p * (t - p - 1) == s.length() - t - 1)
		{
			cout << "YES" << endl;
		}
		else 
			cout << "NO" << endl;
	}
	return 0;
}