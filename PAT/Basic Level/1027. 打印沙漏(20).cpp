#include <iostream>
//#include <string>
#include <cmath>
using namespace std;
int main(){
	//公式推导：s = 2*(a1*n + n*(n-1)/2) -1 = 2*n*n - 1
	int N;
	cin >> N;
	char c;
	cin >> c;
	int n = sqrt((N + 1) / 2);
	int num = 2 * n - 1;
	for(int i = 0; i < n ; i ++){
		for(int j = 0; j < i; j ++)
			cout << " ";
		for(int j = 0; j < num; j ++)
			cout << c;
		cout << endl;
		num -= 2;
	}
	num += 4;
	for(int i = n-2; i >= 0 ; i --){
		for(int j = 0; j < i; j ++)
			cout << " ";
		for(int j = 0; j < num; j ++)
			cout << c;
		cout << endl;
		num += 2;
	}
	cout << N - (2 * n * n) + 1 << endl;
	return 0;
}