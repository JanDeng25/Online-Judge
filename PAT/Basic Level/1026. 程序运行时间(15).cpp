#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const int CLK_TCK = 100;
int main() {
	int C1, C2;
	cin >> C1 >> C2;
	C2 -= C1;
	C2 = (C2 + 50) / 100;
	int hh, mm, ss;
	hh = C2 / 3600;
	C2 -= hh * 3600;
	mm = C2 / 60;
	C2 -= mm * 60;
	ss = C2;
	//cout << hh << ':' << mm << ':' << ss <<endl;
	printf("%02d:%02d:%02d\n", hh, mm, ss);
	return 0;
}
