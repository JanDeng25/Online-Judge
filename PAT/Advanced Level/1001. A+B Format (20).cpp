#include <iostream>
#include <string>
//#include <unordered_map>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	if (sum < 1000 && sum > -1000)
		cout << sum << endl;
	else if (sum >= 1000000) {
		int c = sum % 1000;
		string sc = to_string(c + 1000).substr(1);
		sum = (sum - c) / 1000;
		b = sum % 1000;
		string sb = to_string(b + 1000).substr(1);
		a = (sum - b) / 1000;
		cout << a << ',' << sb << ',' << sc << endl;
	}
	else if (sum <= -1000000) {
		sum = -sum;
		int c = sum % 1000;
		string sc = to_string(c + 1000).substr(1);
		sum = (sum - c) / 1000;
		b = sum % 1000;
		string sb = to_string(b + 1000).substr(1);
		a = (sum - b) / 1000;
		cout << '-' << a << ',' << sb << ',' << sc << endl;
	}
	else {
		if (sum > 0) {
			b = sum % 1000;
			string s = to_string(b + 1000).substr(1);
			a = (sum - b) / 1000;
			cout << a << ',' << s << endl;
		}
		else {
			sum = -sum;
			b = sum % 1000;
			string s = to_string(b + 1000).substr(1);
			a = (sum - b) / 1000;
			cout << -a << ',' << s << endl;
		}
	}
	//cout << -999999 % 1000 << endl;
	return 0;
}