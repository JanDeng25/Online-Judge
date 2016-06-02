#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
	unordered_map<int, string> m;
	m[0] = "zero";    m[1] = "one";
	m[2] = "two";      m[3] = "three";
	m[4] = "four";      m[5] = "five";
	m[6] = "six";     m[7] = "seven";
	m[8] = "eight";      m[9] = "nine";
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	string res = "";
	while (sum > 9) {
		res = " " + m[sum % 10] + res;
		sum /= 10;
	}
	res = m[sum] + res;
	cout << res << endl;
	return 0;
}