#include <iostream>
//#include <iomanip>
//#include <stdio.h>
#include <unordered_map>
//#include <string>
using namespace  std;
int main(){
    int n;    cin >> n;
	int tid, stuid, score;
	char c;
	unordered_map<int,int> t_s;
	for(int i = 0; i < n; i++){
		cin >> tid >> c >> stuid >> score;
		t_s[tid] += score;
	}
	int team, max = 0;
	unordered_map<int,int>::iterator itr = t_s.begin();
	for(itr; itr != t_s.end(); itr++){
		if(itr->second > max){
			max = itr->second;
			team = itr->first;
		}
	}
	cout << team << ' ' << max << endl;
	return 0;
}