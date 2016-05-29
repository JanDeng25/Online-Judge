#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
	unordered_map<int, string> m;
	m[0] = "ling";    m[1] = "yi";
	m[2] = "er";      m[3] = "san";
	m[4] = "si";      m[5] = "wu";
	m[6] = "liu";     m[7] = "qi";
	m[8] = "ba";      m[9] = "jiu";
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