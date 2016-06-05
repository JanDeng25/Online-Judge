#include <iostream>
//#include <string>
using namespace std;
int main(){
	int N;
	cin >> N;
	int w = (N + 1) / 2;
	char c;
	cin >> c;
	for(int i = 0 ; i < N; i++)
		cout << c;
	cout << endl;
	for(int j = 1; j < w - 1; j++){
		cout << c;
		for(int i = 1 ; i < N - 1; i++){
			cout << ' ';
		}
		cout << c;
		cout << endl;
	}
	
	for(int i = 0 ; i < N; i++)
		cout << c;
	cout << endl;
	return 0;
}