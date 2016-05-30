#include <iostream>
#include <string>
//#include <map>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	vector<string> res;
	char *con;
	char split[] = " ";
	char * temp = strtok((char*)s.c_str(), split);
	while (temp != NULL) {
		res.push_back(temp);
		//cout << temp << endl;
		temp = strtok(NULL, split);
	}
	for (int i = res.size()-1; i >= 1; i--) {
		cout << res[i] << ' ';
	}
	cout << res[0] << endl;
	return 0;
}