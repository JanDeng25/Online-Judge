#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace  std;
int main(){
	string a;
	cin >> a;
	char flag1 = a[0], one = a[1];
	int ind = a.find('E');
	string rest = a.substr(3,ind - 3);
	//cout << rest << " rest" << endl;
	//cout << rest.length()<<endl;
	char flag2 = a[ind+1];
	string temp = a.substr(ind+2);
	int p = 0;
	for(int i = 0; i < temp.length(); i++){
		p = 10 * p + temp[i] - '0';
	}
	//cout << p << " p" <<endl;
	if(flag1 == '-')
		cout << flag1;
	if(p == 0){
		cout << one << '.' << rest << endl;
		return 0;
	}
	if(flag2 == '-'){
		rest = one + rest;
		for(int i = 0; i < p-1; i++){
			rest = "0" + rest;
		}
		cout << 0 << '.' << rest << endl;
		return 0;
	}
	else{
		if(rest.length() <= p){
			int l = rest.length();
			for(int i = 0; i < p - l; i++){
				rest = rest + "0";
			}
			cout << one << rest << endl;
			return 0;
		}
		else {
			string rest1 = rest.substr(0,p);
			string rest2 = rest.substr(p);
			cout << one << rest1 << '.' << rest2 << endl;
			return 0;
		}
	}
	return 0;
}