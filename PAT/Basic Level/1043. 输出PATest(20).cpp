#include <iostream>
#include <string>
//#include <map>
//#include <unordered_map>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int ch[6] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'P')
			ch[0] ++;
		if (s[i] == 'A')
			ch[1] ++;
		if (s[i] == 'T')
			ch[2] ++;
		if (s[i] == 'e')
			ch[3] ++;
		if (s[i] == 's')
			ch[4] ++;
		if (s[i] == 't')
			ch[5] ++;
	}
	while (ch[0] || ch[1] || ch[2] || ch[3] || ch[4] || ch[5]) {
		if (ch[0]) { cout << 'P';    ch[0] --; }
		if (ch[1]) { cout << 'A';    ch[1] --; }
		if (ch[2]) { cout << 'T';    ch[2] --; }
		if (ch[3]) { cout << 'e';    ch[3] --; }
		if (ch[4]) { cout << 's';    ch[4] --; }
		if (ch[5]) { cout << 't';    ch[5] --; }
	}
	cout << endl;
	return 0;
}