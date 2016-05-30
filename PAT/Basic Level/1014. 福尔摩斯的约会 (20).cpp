#include <iostream>
#include <string>
//#include <map>
#include <unordered_map>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
using namespace std;
int main() {
	string str[4];
	unordered_map<char, string> m;
	m['A'] = "MON";    m['B'] = "TUE";
	m['C'] = "WED";    m['D'] = "THU";
	m['E'] = "FRI";    m['F'] = "SAT";
	m['G'] = "SUN";
	for (int i = 0; i < 4; i++) {
		cin >> str[i];
	}
	int d = 1;
	for (int i = 0; i < str[0].length() && i < str[1].length(); i++) {
		if (str[0][i] >= 'A' && str[0][i] <= 'G' && str[0][i] == str[1][i] && d) {
				cout << m[str[0][i]] << ' ';
				d = 0;	
		}
		else if ((str[0][i] >= 'A' && str[0][i] <= 'N' || str[0][i] >= '0' && str[0][i] <= '9') && str[0][i] == str[1][i] && !d) {
			if ('0' <= str[0][i] && '9' >= str[0][i])
				cout << 0 << str[0][i] << ':';
			else
				cout << str[0][i] - 'A' + 10 << ':';
			break;
		}
	}
	for (int i = 0; i < str[2].length() && i < str[3].length(); i++) {
		if (isalpha(str[2][i]) && str[2][i] == str[3][i]) {
			if (i <= 9)
				cout << 0 << i << endl;
			else
				cout << i << endl;
			break;
		}
	}
	return 0;
}