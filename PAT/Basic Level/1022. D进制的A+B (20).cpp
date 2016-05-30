#include <iostream>
#include <string>
//#include <map>
//#include <vector>
//#include <iomanip>
using namespace std;
int main() {
	int A, B, D;
	cin >> A >> B >> D;
	A += B;
	if (A == 0) {
		cout << 0 << endl;
		return 0;
	}
	int res[1000], i = 0;
	while (A) {
		res[i] = (A % D);
		i++;
		A /= D;
	}
	for (i--; i >= 0; i--)
		cout << res[i];
	cout << endl;
	return 0;
}