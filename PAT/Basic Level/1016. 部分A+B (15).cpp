#include <iostream>
#include <string>
//#include <map>
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	string A, B;
	int DA, DB;
	cin >> A >> DA >> B >> DB;
	long numA = 0, numB = 0;
	for (int i = 0; i < A.length(); i++) {
		if (A[i] == '0' + DA)
			numA = 10 * numA + DA;
	}
	for (int i = 0; i < B.length(); i++) {
		if (B[i] == '0' + DB)
			numB = 10 * numB + DB;
	}
	cout << numA + numB << endl;
	return 0;
}