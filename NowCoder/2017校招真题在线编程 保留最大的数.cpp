//每次寻找第一个前者比后者小的字符，每次删掉那个字符。但是一开始用for循环的时候，
//只能通过80%测试样例。
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string del(string s, int n) {
	while (n > 0) {
		int i = 0;
		while (i < s.length() - 1 && s[i] >= s[i + 1])
			i++;
		s.erase(i, 1);
		n--;
	}
	return s;
}
int main() {
	string s;
	int n;
	while (cin >> s && cin >> n) {
		cout << del(s, n) << endl;
	}
	return 0;
}