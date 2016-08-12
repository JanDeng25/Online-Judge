#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0, now = 0;
	int next;
	while(n--){
		cin>> next;
		if(next > now)
			sum += 6 * (next - now) + 5;
		else 
			sum += 4 * (now - next) + 5;
		now = next;
	}
	cout << sum << endl;
	return 0;
}