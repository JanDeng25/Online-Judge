#include <iostream>
#include <string>
//#include <map>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	int T;
	long a, b, c;
	cin >> T;
	string greater;
	for (int i = 1; i <= T; i++) {
		cin >> a >> b >> c;
		if (a + b > c)
			greater = "true";
		else
			greater = "false";
		cout << "Case #" << i << ": " << greater << endl;
	}
	return 0;
}