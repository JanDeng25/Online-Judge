#include <iostream>
#include <string>
//#include <map>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s = "";
	while (n) {
		int a = n % 10;
		while (a >= 1) {
			s = to_string(a) + s;
			a--;
		}
		n /= 10;
		if (n == 0) break;
		a = n % 10;
		while (a >= 1) {
			s = "S" + s;
			a--;
		}
		n /= 10;
		if (n == 0) break;
		a = n % 10;
		while (a >= 1) {
			s = "B" + s;
			a--;
		}
		n /= 10;
	}
	cout << s << endl;

	return 0;
}