#include <iostream>
#include <stack>
#include <string>
//#include <vector>
using namespace std;
int main() {
	
	//using a vector and a stack may be more convenient;
	int m, n, k;
	cin >> m >> n >> k;
	
	int *a = new int[n];
	
	for (int i = 0; i < k; i++) {
		bool res = true;
		stack<int> s;
		int last = 1;
		for (int j = 0; j < n; j++){
			cin >> a[j];
			//cout << a[j] << endl;
		}
			
		for (int j = 0; j < n; j++) {
			if (s.empty() || last <= a[j]) {
				//cout << last << a[j] << endl;
				for (int temp = last; temp < a[j]; temp++) {
					s.push(temp);
					//cout << temp << endl;
				}
				//cout << s.size() << endl;
				if (s.size() > m - 1) {
					res = false;
					break;
				}
			}
			else
			{
				if (!s.empty() && s.top() == a[j]) {
					//cout << "s.top()" << s.top() << endl;
					s.pop();
				}
					
				else
				{
					res = false;
					break;
				}
			}
			if (a[j] >= last) {
				last = a[j] + 1;
			}
			//cout << "res " << res << endl;
		}
		if (res)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}