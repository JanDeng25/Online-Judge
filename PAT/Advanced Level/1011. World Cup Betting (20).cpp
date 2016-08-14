#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;
int main(){
	map<double,char> m[3];
	double a,b,c;
	for(int i = 0; i < 3; i++){
		cin >> a >> b >> c;
		m[i][a] = 'W';
		m[i][b] = 'T';
		m[i][c] = 'L';
	}
	map<double, char>::reverse_iterator ritr0 = m[0].rbegin();
	map<double, char>::reverse_iterator ritr1 = m[1].rbegin();
	map<double, char>::reverse_iterator ritr2 = m[2].rbegin();
	//cout << ritr->first << ' ' << ritr->second << endl;
	cout << ritr0->second << ' ' << ritr1->second << ' ' << ritr2->second << ' ';
	cout << fixed << setprecision(2) << 2.0 * ((ritr0->first * ritr1->first * ritr2->first * 0.65 - 1)) << endl;
	return 0;
}