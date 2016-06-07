#include <iostream>
#include <string>
#include <map>
using namespace  std;
int main(){
	map<int,int> m;
	string num;
	cin >> num;
	for(int i = 0; i < num.length(); i++){
		m[num[i] - '0'] ++;
	}
	map<int,int>::iterator itr = m.begin();
	for(itr; itr != m.end(); itr++)
		cout << itr->first << ':' << itr->second << endl;
	return 0;
}