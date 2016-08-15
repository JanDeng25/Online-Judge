#include <iostream>
//#include <iomanip>
#include <string>
#include <vector>
using namespace std;
struct in_out_time{
	int h,m,s;
	bool operator < (in_out_time t){
		return h < t.h || (h == t.h && m < t.m) || (h == t.h && m == t.m && s < t.s); 
	}
};
int main(){
	int n;
	cin >> n;
	char c;
	in_out_time in,out,first,last;
	first.h = first.m = first.s = 61;
	last.h = last.m = last.s = -1;
	string sign_in, sign_out,id;
	for(int i = 0; i < n; i++){
		cin >> id >> in.h >> c >> in.m >> c >> in.s >> out.h >> c >> out.m >> c >> out.s;
		if(in < first){
			first = in;
			sign_in = id;
		}
		if(last < out){
			last = out;
			sign_out = id;
		}
	}
	cout << sign_in << ' ' << sign_out << endl;
	return 0;
}