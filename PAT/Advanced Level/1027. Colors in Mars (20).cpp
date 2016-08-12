#include <iostream>
#include <string>
using namespace std;
string ito13(int n){
	string res = "";
	if(n / 13 < 10)
		res += '0' + n / 13;
	else
		res += 'A' + (n / 13 - 10);
	if(n % 13 < 10)
		res += '0' + n % 13;
	else
		res += 'A' + (n % 13 - 10);
	return res;
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	string res = "#";
	res += ito13(a) + ito13(b) + ito13(c);
	cout << res << endl;
	return 0;
}