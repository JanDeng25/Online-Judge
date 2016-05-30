#include <iostream>
#include <string>
//#include <map>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int N;
	cin >> N;
	int a;
	int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
	int num2 = 0, num4  = 0;
	int one = 1;
	while (N--) {
		cin >> a;
		if (a % 10 == 0)
			A1 += a;
		else if (a % 5 == 1) {
			num2 ++;
			A2 += one * a;
			one = -one;
		}
		else if (a % 5 == 2) {
			A3 ++;
		}
		else if (a % 5 == 3) {
			num4 ++;
			A4 += a;
		}
		else if (a % 5 == 4) {
			if (a > A5)
				A5 = a;
		}
	}
	if (A1 == 0)
		cout << 'N' << ' ';
	else
		cout << A1 << ' ';
	if (num2 == 0)
		cout << 'N' << ' ';
	else
		cout << A2 << ' ';
	if (A3 == 0)
		cout << 'N' << ' ';
	else
		cout << A3 << ' ';
	if (A4 == 0)
		cout << 'N' << ' ';
	else 
		cout << fixed << setprecision(1) << (double)A4 / num4 << ' ';
	if (A5 == 0)
		cout << 'N' << endl;
	else
		cout << A5 << endl;

	return 0;
}