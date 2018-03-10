//×Ö·û´®·Ö¸î
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;
string splitstring(string s) {
	const char *split = " ";
	char * tmp;
	tmp = strtok((char*)s.c_str(), split);
	string res = "";
	vector<string> v;
	while (tmp != NULL) {
		v.push_back(string(tmp));
		tmp = strtok(NULL, split);
	}
	int size = v.size();
	res += v[size - 1];
	for (int i = size - 2; i >= 0; i--)
		res += (" " + v[i]);
	//cout << res << endl;
	return res;
}
int main() {
	string s;
	while (getline(cin, s)) {
		cout << splitstring(s);
	}
	return 0;
}