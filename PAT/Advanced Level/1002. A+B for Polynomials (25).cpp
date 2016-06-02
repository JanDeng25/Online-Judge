#include <iostream>
//#include <string>
//#include <map>
//#include <unordered_map>
//#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
double polyA[1001] = { 0 };
int main() {
	
	int kA, kB;
	cin >> kA;
	int n;
	double a;
	while (kA--) {
		cin >> n >> a;
		polyA[n] += a;
	}
	cin >> kB;
	while (kB--) {
		cin >> n >> a;
		polyA[n] += a;
	}
	int count = 0;
	for (int i = 1000; i >= 0; i--) {
		if (polyA[i] != 0) {
			count++;
		}
	}
	cout << count;
	for (int i = 1000; i >= 0; i--) {
		if (polyA[i] != 0.0)
		{
			cout << fixed << setprecision(1);
			cout << ' ' << i << ' ' << polyA[i];
		}
	}
	cout << endl;
	return 0;
}