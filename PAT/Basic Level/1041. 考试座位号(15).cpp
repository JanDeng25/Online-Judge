#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace  std;
struct stu{
	string id;
	int real;
};
int main(){
    int n;    cin >> n;
	stu* stus = new stu[n+1];
	for(int i = 0; i < n; i++){
		int t, r;
		string id;
		cin >> id >> t >> r;
		stus[t].id = id;
		stus[t].real = r;
		//cout << stus[t].id << ' ' << stus[t].real << endl;
	}
	int m, temp;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> temp;
		cout << stus[temp].id << ' ' << stus[temp].real << endl;
	}
	return 0;
}