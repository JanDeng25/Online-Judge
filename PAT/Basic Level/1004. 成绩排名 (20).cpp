#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
	int n;
	map<int, string> m;
	cin >> n;
	char name[11], num[11];
	int score;
	while (n--) {
		cin >> name >> num >> score;
		string s = name;
		s += " ";
		s += num;
		m[score] = s;
		//cout << s << endl;
		//cout << name << endl << num << endl << score << endl;
	}
	map<int, string>::iterator itr = m.begin();
	int size = m.size();
	for (int i = 0; i < size - 1; i ++, itr ++) {
		//cout << itr->first << ' ' << itr->second << endl;
	}
	cout  << itr->second << endl;
	cout << m.begin()->second << endl;
	return 0;
}